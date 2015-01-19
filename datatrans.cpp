#include "datatrans.h"
#include <QFileDialog>
#include <QSqlRecord>
#include <iostream>
#include <QMessageBox>

using namespace std;


/*
 *
 *数据管理
 * 数据删除 修改 导入和导出
 */
DataTrans::DataTrans(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);

    modelIndex = new QSqlRelationalTableModel(this);
    QString tableName2="Index2";
    modelIndex->setTable (tableName2);
    modelIndex->setEditStrategy (QSqlTableModel::OnManualSubmit);
    modelIndex->select ();

    model = new QSqlRelationalTableModel(this);
    model->setTable("data");
    model->setEditStrategy (QSqlRelationalTableModel::OnManualSubmit);
    data_tableView->setModel (model);
    data_tableView->hideColumn (0);
    setHeader ();
    model->setSort(1,Qt::AscendingOrder);
    model->select ();
}
//QSqlRelationalTableModel *modelIndex;
//QSqlRelationalTableModel *model;
//QXlsx::Document *xlsx;


DataTrans::~DataTrans()
{
    delete(modelIndex);
    delete(model);
}


void DataTrans::on_quit_pushButton_clicked ()
{
    this->close ();
}

void DataTrans::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        retranslateUi(this);
        break;
    default:
        break;
    }
}

/*
 * 设置表头
 */
void DataTrans::setHeader()
{
    model->setHeaderData(model->fieldIndex("id"), Qt::Horizontal, tr("序号"));
    model->setHeaderData(model->fieldIndex("year"), Qt::Horizontal, tr("年"));
    model->setHeaderData(model->fieldIndex("quarter"), Qt::Horizontal, tr("季度"));

    for (int i = 3; i < model->columnCount (); ++i) {
        QString code3 = model->record ().fieldName (i);
        modelIndex->setFilter ("code3 ='"+code3+"'");
        modelIndex->select ();
        model->setHeaderData(i, Qt::Horizontal, modelIndex->record (0).value ("name").toString ());
        //
    }

}

/*
 * 导入Excel文件
 */
void DataTrans::on_importExcel_pushButton_clicked()
{
    // QString fileName =   "/Users/r0b1n/Documents/data.xlsx";

    QString fileName =    QFileDialog::getOpenFileName(this,tr("Excel文件"),
                                                       "/Users/r0b1n/Documents",tr("Excel文件 (*.xlsx)"));

    int rowC = model->rowCount ();
    int columnC = model->columnCount ();
    int i=2;
    int j=1;
    bool f = true;

    if (!fileName.isEmpty()) {
        xlsx = new QXlsx::Document(fileName);
        while(xlsx->read (i,j).toString ()!="")
        {
            model->insertRow (rowC+i-2);
            int id = rowC +i-1;
            model->setData (model->index (id-1, 0),id);
            for (; j < columnC; ++j) {
                QString cell = xlsx->read (i,j+1).toString ();
                model->setData (model->index (id-1, j), cell);
            }
            if(!model->submitAll())
            {
                f=false;
                QMessageBox::warning (this,"Error","数据导入失败!");
                break;
            }
            i++;
            j=1;
        }
        if(f)
            QMessageBox::warning (this,"Correct","数据导入成功!");
        model->setSort(1,Qt::AscendingOrder);
        model->select ();

    }



}

/*
 * 修改指标数据
 */
void DataTrans::on_modify_pushButton_clicked()
{
    int row = data_tableView->currentIndex ().row ();
    int column =data_tableView->currentIndex ().column ();
    QString codeValue = code3Value_lineEdit->text ();

    if((model->setData(model->index(row,column),codeValue)&&
        (model->submitAll())))
        QMessageBox::warning (this,"Correct","指标修改成功!");
    else
        QMessageBox::warning (this,"Error","指标修改失败!");

}


void DataTrans::on_search_pushButton_clicked()
{
    setFilter ();
    model->setSort(1,Qt::AscendingOrder);
    model->select();
}

/*
 * 设置查询条件
 */
void DataTrans::setFilter ()
{
    QString year = year_lineEdit->text ();
    QString quarter= quarter_lineEdit->text ();
    QString code3= code3_lineEdit->text ();
    QString code3Value = code3Value_lineEdit->text();

    QString itemFilter = "";
    if((year=="")&&(quarter=="")&&(code3==""))
    {
        QMessageBox::warning (this,"Error","请输入检索条件!");
    }

    else if((year=="")&&(quarter==""))
    {

        itemFilter += code3;
        itemFilter += "='";
        itemFilter += code3Value;
        itemFilter += "'";

    }
    else if(year=="")
    {
        if(code3!="")
        {
            itemFilter += "quarter ='";
            itemFilter += quarter;
            itemFilter += "' and ";

            itemFilter += code3;
            itemFilter += "='";
            itemFilter += code3Value;
            itemFilter += "'";
        }
        else
        {
            itemFilter += "quarter ='";
            itemFilter += quarter;
            itemFilter += "'";
        }
    }
    else
    {
        itemFilter += "year ='";
        itemFilter += year;
        itemFilter += "'";

        if(quarter!="")
        {
            itemFilter += "and quarter ='";
            itemFilter += quarter;
            itemFilter += "'";
        }
        if(code3!="")
        {
            itemFilter += "and ";
            itemFilter += code3;
            itemFilter += "='";
            itemFilter += code3Value;
            itemFilter += "'";
        }
    }


    model->setFilter (itemFilter);

}

/*
 * tableView中 显示表数据
 */
void DataTrans::on_data_tableView_clicked()
{
    int row = data_tableView->currentIndex ().row ();

    QString year = model->record (row).value("year").toString ();

    year_lineEdit->setText (year);

    QString quarter = model->record (row).value("quarter").toString ();

    quarter_lineEdit->setText (quarter);

    int column = data_tableView->currentIndex ().column ();
    if(column<3)
    {
        code3_lineEdit->setText ("");
        code3Value_lineEdit->setText("");
    }
    else{
        QString code3  = model->record (row).fieldName (column);

        code3_lineEdit->setText (code3);

        QString code3_value = model->record (row).value (code3).toString ();

        code3Value_lineEdit->setText(code3_value);
    }
}

/*
 * 删除指标数据
 */
void DataTrans::on_delete_pushButton_clicked()
{
    int row = data_tableView->currentIndex ().row ();
    if((model->removeRow (row))&&
            (model->submitAll()))
        QMessageBox::warning (this,"Correct","删除指标成功!");
    else
        QMessageBox::warning (this,"Error","删除指标失败!");
    model->setSort(1,Qt::AscendingOrder);
    model->select ();
}


/*
 * 删除全部指标数据
 */
void DataTrans::on_clear_pushButton_clicked()
{
    model->setFilter ("");
    model->setSort(0,Qt::AscendingOrder);
    model->select ();

    year_lineEdit->setText ("");
    quarter_lineEdit->setText ("");
    code3_lineEdit->setText ("");
    code3Value_lineEdit->setText("");

}

/*
 * 导出数据为Execl
 */
void DataTrans::on_exportExcel_pushButton_clicked()
{

    QString fileName = QFileDialog::getSaveFileName(this,
            tr("设置导出文件"),
            "",
            tr("*.xlsx"));
//    QString path = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    if( fileName !="")
    {
        //QString fileName = path + "/data.xlsx";

        QXlsx::Document *xlsx = new QXlsx::Document(fileName);

        int rowC = (model->rowCount ());
        int columnC = (model->columnCount ());

        for (int i = 0; i < columnC; ++i) {
            xlsx->write (1,i+1,model->headerData (i,Qt::Horizontal).toString ());
        }


        for (int i = 0; i < rowC; ++i) {
            for (int j = 0; j < columnC; ++j) {
                xlsx->write ((i+2),(j+1), model->record (i).value (j).toString ());
            }
        }

        if (!fileName.isEmpty()) {
            if(xlsx->save())
                QMessageBox::warning (this,"Correct","数据导出成功");
            else
                QMessageBox::warning (this,"Error","数据导出失败");
        }
    }
}

/*
 * 删除全部指标数据
 */
void DataTrans::on_delAll_pushButton_clicked()
{

    if(QMessageBox::question (this,"Warning","确认删除全部数据")==0x00004000)
    {
        model->removeRows (0,model->rowCount ());
        if(model->submitAll())
            QMessageBox::warning (this,"Correct","删除全部指标成功!");
        else
            QMessageBox::warning (this,"Error","删除全部指标失败!");
    }
}
