#include "index.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QFileDialog>


/*
 * 指标结构表的模块
 * 删除 修改 查找 删除全部 导入 导出 二级和三级指标
 */

Index::Index(QWidget *parent) :
    QDialog(parent)
{

    setupUi (this);
    model = new QSqlTableModel(this);
    model->setEditStrategy (QSqlTableModel::OnManualSubmit);
    model->setTable("index2");
    index_treeView->setModel (model);

    modelData = new QSqlTableModel(this);
    modelData->setEditStrategy (QSqlTableModel::OnManualSubmit);
    modelData->setTable("data");

    model->setHeaderData(model->fieldIndex("Flag"), Qt::Horizontal, tr("数据计算标签"));
    model->setHeaderData(model->fieldIndex("Name"), Qt::Horizontal, tr("指标名称"));
    model->setHeaderData(model->fieldIndex("Code3"), Qt::Horizontal, tr("指标代码"));
    model->setHeaderData(model->fieldIndex("Code2"), Qt::Horizontal, tr("二级指标代码"));
    model->setHeaderData(model->fieldIndex("Info"), Qt::Horizontal, tr("指标说明"));
    index_treeView->hideColumn (0);
    index_treeView->hideColumn (1);
    model->setSort (0,Qt::AscendingOrder);
    model->select ();



}
//QSqlTableModel *model;
//QSqlTableModel *modelData;
//QXlsx::Document *xlsx;
Index::~Index ()
{
    delete(model);
    delete(modelData);
}

void Index::on_quit_pushButton_clicked()
{
    this->close();
}

//显示指标数据
void Index::on_index_treeView_clicked()
{
    int row = index_treeView->currentIndex ().row ();

    QString name = model->record (row).value("Name").toString ();

    name_lineEdit->setText (name);

    QString code3 = model->record (row).value("Code3").toString ();

    code3_lineEdit->setText (code3);

    QString code2 = model->record (row).value("Code2").toString ();

    code2_lineEdit->setText (code2);

    QString info = model->record (row).value ("Info").toString ();

    info_textEdit->setText(info);

}

//void Index::on_add_pushButton_clicked()
//{
//    //int row = index_treeView->currentIndex ().row ();
//    QString name = name_lineEdit->text ();
//    QString code3= code3_lineEdit->text ();
//    QString code2 = code2_lineEdit->text ();
//    QString code3q = "'"+ code3 +"'";
//    QString info = info_textEdit->toPlainText ();
//    int id = model->rowCount ();
//    //    QSqlQuery query;
//    //    query.prepare("INSERT INTO person (id, forename, surname) "
//    //                  "VALUES (:id, :forename, :surname)");
//    //    query.bindValue(":id", 1001);
//    //    query.bindValue(":forename", "Bart");
//    //    query.bindValue(":surname", "Simpson");
//    //    query.exec();
//    QSqlQuery queryModel;
//    QString query = "ALTER TABLE data ADD COLUMN "+  code3q + " text;";
// //       QString query = "ALTER TABLE data ADD COLUMN 'X97' text";

//    queryModel.prepare (query);
//    //bool f=queryModel.exec ();

//    if((model->insertRow (id))&&
//            (model->setData(model->index(id,0),id+1))&&
//            (model->setData(model->index(id,1),name))&&
//            (model->setData(model->index(id,2),code3))&&
//            (model->setData(model->index(id,3),code2))&&
//            (model->setData(model->index(id,4),info))&&
//            model->submitAll())
//    {

//            queryModel.exec ();
//            QMessageBox::warning (this,"Correct","指数添加成功!");

//    }
//    else
//    {
//        QMessageBox::warning (this,"Error","指数添加失败!");
//    }

//    model->select ();

//}

//void Index::on_delete_pushButton_clicked()
//{
//    int row = index_treeView->currentIndex ().row ();
//    QString code3 = model->record (row).value ("code3").toString ();
//    QString code3q = "'"+code3+"'";
//    QSqlQuery queryModel;



//    if((model->removeRow (row))&&
//            (model->submitAll()))
//    {
//        queryModel.exec ();
//        QMessageBox::warning (this,"Correct","删除指标成功!");

//    }
//    else
//    {
//        QMessageBox::warning (this,"Error","删除指标失败!");
//    }

//    model->select ();
//}

/*
 * 修改指标
 */
void Index::on_modify_pushButton_clicked()
{
    int row = index_treeView->currentIndex ().row ();
    QString name = name_lineEdit->text ();
    QString code3 = code3_lineEdit->text();
    QString code2 =code2_lineEdit->text();
    QString info = info_textEdit->toPlainText ();

    if((model->setData(model->index(row,1),name)&&
        (model->setData(model->index(row,2),code3))&&
        (model->setData(model->index(row,3),code2))&&
        (model->setData(model->index(row,4),info))&&
        (model->submitAll())))
        QMessageBox::warning (this,"Correct","指标修改成功!");
    else
        QMessageBox::warning (this,"Error","指标修改失败!");


}

void Index::on_search_pushButton_clicked()
{
    setFilter ();
    model->setSort(0,Qt::AscendingOrder);
    model->select();
}

/*
 * 设置查询参数
 */
void Index::setFilter ()
{
    QString name = name_lineEdit->text ();
    QString code3= code3_lineEdit->text ();
    QString code2= code2_lineEdit->text ();
    QString info = info_textEdit->toPlainText ();

    QString itemFilter = "";
    if((name=="")&&(code3=="")&&(code2=="")&&(info==""))
    {
        QMessageBox::warning (this,"Error","请输入检索条件!");
    }

    else if((name=="")&&(code3=="")&&(code2==""))
    {
        itemFilter += "Info ='";
        itemFilter += info;
        itemFilter += "'";
    }
    else if((name=="")&&(code3==""))
    {

        if(info!="")
        {
            itemFilter += "Code2 ='";
            itemFilter += code2;
            itemFilter += "'";

            itemFilter += "and Info ='";
            itemFilter += info;
            itemFilter += "'";
        }
        else
        {
            itemFilter += "Code2 ='";
            itemFilter += code2;
            itemFilter += "'";
        }


    }
    else if(name=="")
    {
        if(code2!="")
        {
            itemFilter += "Code3 ='";
            itemFilter += code3;
            itemFilter += "'";

            itemFilter += "and Code2 ='";
            itemFilter += code2;
            itemFilter += "'";

            if(info!="")
            {

                itemFilter += "and Info ='";
                itemFilter += info;
                itemFilter += "'";
            }
        }
        else
        {
            itemFilter += "Code3 ='";
            itemFilter += code3;
            itemFilter += "'";
            if(info!="")
            {
                itemFilter += "and Info ='";
                itemFilter += info;
                itemFilter += "'";
            }
        }
    }
    else
    {
        itemFilter += "name ='";
        itemFilter += name;
        itemFilter += "'";

        if(code3!="")
        {
            itemFilter += "and code3 ='";
            itemFilter += code3;
            itemFilter += "'";
        }
        if(code2!="")
        {
            itemFilter += "and code2 ='";
            itemFilter += code2;
            itemFilter += "'";
        }
        if(info!="")
        {
            itemFilter += "and info ='";
            itemFilter += info;
            itemFilter += "'";
        }

    }


    model->setFilter (itemFilter);

}

/*
 * 清除查询条件
 */
void Index::on_clear_pushButton_clicked()
{
    name_lineEdit->setText ("");
    code3_lineEdit->setText ("");
    code2_lineEdit->setText ("");
    info_textEdit->setText ("");

    model->setFilter ("");
    model->select ();
}
//    queryModel.prepare ("BEGIN TRANSACTION;"+
//    "CREATE TEMPORARY TABLE t1_backup(a,b);"+
//    "INSERT INTO t1_backup SELECT a,b FROM t1;"+
//    "DROP TABLE t1;"+
//    "CREATE TABLE t1(a,b);"+
//    "INSERT INTO t1 SELECT a,b FROM t1_backup;"+
//    "DROP TABLE t1_backup;"+
//    "COMMIT;");

/*
 * 删除全部指标
 */
void Index::on_delAll_pushButton_clicked()
{
    if(QMessageBox::question (this,"Warning","确认删除全部数据")==0x00004000)
    {
        QSqlQuery query;

        query.exec ("BEGIN TRANSACTION;");
        //query.exec ("CREATE TEMPORARY TABLE t_backup(id integer, year integer, quarter integer);");
        //query.exec ("INSERT INTO t_backup SELECT id, year, quarter FROM data;");
        query.exec ("DROP TABLE data;");
        query.exec ("CREATE TABLE data(id integer, year integer, quarter integer, PRIMARY KEY (id));");
        //query.exec ("INSERT INTO data SELECT id,year,quarter FROM t_backup");
        //query.exec ("DROP TABLE t_backup;");
        query.exec ("COMMIT;");


        model->removeRows (0,model->rowCount ());
        if(model->submitAll())
            QMessageBox::warning (this,"Correct","删除全部指标成功!");
        else
            QMessageBox::warning (this,"Error","删除全部指标失败!");
    }
}

/*
 * 导入指标
 */
void Index::on_import_pushButton_clicked()
{
    QString fileName =    QFileDialog::getOpenFileName(this,tr("Excel文件"),
                                                       "/Users/r0b1n/Documents",tr("Excel文件 (*.xlsx)"));

    int rowC = model->rowCount ();
    int columnC = model->columnCount ();
    int i=2;
    int j=1;
    bool f=true;

    if (!fileName.isEmpty()) {
        xlsx = new QXlsx::Document(fileName);
        while(xlsx->read (i,j).toString ()!="")
        {
            int id = rowC +i -1;

            model->insertRow (id-1);

            model->setData (model->index (id-1, 0),id);
            QString code = xlsx->read (i,4).toString ();
            QSqlQuery query;
            query.exec ("ALTER TABLE data ADD COLUMN '"+ code + "' real;");


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
            if(!f)
                break;
            i++;
            j=1;
        }
        QMessageBox::warning (this,"OK","数据导入成功!");
    }
}

/*
 * 导出指标
 */
void Index::on_export_pushButton_clicked()
{
    //QString path = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    QString fileName = QFileDialog::getSaveFileName(this,
            tr("设置导出文件"),
            "",
            tr("*.xlsx"));
    if( fileName !="")
    {
        //QString fileName = path + "/index.xlsx";

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
