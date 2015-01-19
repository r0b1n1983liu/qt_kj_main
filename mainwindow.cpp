#include "mainwindow.h"
#include <QSqlRecord>
#include "dynamicarray.h"
#include <QDataWidgetMapper>
#include <QStandardItemModel>
#include <QSqlQueryModel>
#include <list>
#include <iostream>
#include <QFileDialog>
#include "kjanalysis.h"
#include <iostream>
#include <QDateTime>
#include <cmath>

using namespace std;
/* 主窗口
 * 初始化
 * modelIndex -> Index2 -> 指标表
 * model -> data > 数据表
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
//    Qt::WindowFlags flags=Qt::Dialog;
//    flags =  Qt::WindowMinimizeButtonHint&~Qt::WindowMaximizeButtonHint;
//    setWindowFlags(flags);

    setupUi(this);
    //modelIndex  --index2


    kjAnalytics =new DynamicArray();
    kjAnalyticsAll =new DynamicArray();

    modelIndex = new QSqlRelationalTableModel(this);
    QString tableNameI="Index2";
    modelIndex->setTable (tableNameI);
    modelIndex->setEditStrategy (QSqlTableModel::OnManualSubmit);
    modelIndex->select ();


    //model -- data
    model= new QSqlRelationalTableModel(this);
    tableName="data_all";
    model->setTable (tableName);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    this->setHeader ();
    //生成年份下拉筐的备选项
    model->select ();

    //model -- data2
    model2=new QSqlRelationalTableModel(this);
    QString tableName2="data2";
    model2->setTable (tableName2);
    model2->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model2->select();

    //model -- data3
    model3=new QSqlRelationalTableModel(this);
    QString tableName3="data3";
    model3->setTable (tableName3);
    model3->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model3->select();

    //model -- data4
    model4=new QSqlRelationalTableModel(this);
    QString tableName4="data4";
    model4->setTable (tableName4);
    model4->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model4->select();

    AllIndexTable();
    typeModel = new QStringListModel;
    typeModel1 = new QStringListModel;

    tableName="data_all";
    model->setTable (tableName);
    //生成年份下拉筐的备选项
    model->select ();
    int rowC  = model->rowCount ();
    QStringList qsl;
    qsl.append ("全部");

    for (int i = 0; i < rowC ; ++i) {
        if(!qsl.contains (model->record (i).value ("year").toString ()))
            qsl.append (model->record (i).value ("year").toString ());
    }


    typeModel->setStringList (qsl);
    year_comboBox->setModel (typeModel);
    year_comboBox->show ();

    //设置表格控件显示内容 model
    model->setTable (tableName);
    setHeader ();
    setFilter ();
    model->setSort(0,Qt::AscendingOrder);
    model->select();


    all_tableView->setModel (model);
    all_tableView->hideColumn (0);





    //        QTableView *view = new QTableView;
    //        view->setModel(model2);
    //        //view->hideColumn(0); // don't show the ID
    //        view->show();

    //    QTableView *view1 = new QTableView;
    //    view1->setModel(model3);
    //    //view->hideColumn(0); // don't show the ID
    //    view1->show();


}



/*QSqlTableModel *model;
*QSqlRelationalTableModel *modelIndex;
*QStandardItemModel *modelST;
*DynamicArray *kjAnalytics;
*QStringListModel *typeModel;
*/
MainWindow::~MainWindow()
{
    delete(model);
    delete(modelIndex);
    delete(model2);
    delete(model3);
    delete(model4);
    //delete(modelST);
    //delete(typeModel);
    //delete(typeModel1);

}


//set index and order table
void MainWindow::AllIndexTable()
{
    int rowC = model->rowCount ();
    for (int i = 0; i < rowC; ++i)
    {   if(model2->insertRow(i)&&
                model2->submitAll())
            QMessageBox::warning (this,"Error","添加行失败!");
        if(model3->insertRow(i)&&
                model3->submitAll())
            QMessageBox::warning (this,"Error","添加行失败!");
        if(model4->insertRow(i)&&
                model4->submitAll())
            QMessageBox::warning (this,"Error","添加行失败!");
    }
    //    QTableView *view = new QTableView;
    //    view->setModel(model2);
    //    //view->hideColumn(0); // don't show the ID
    //    view->show();

    for(int j = 0; j < 7; ++j)
    {
        model->setTable (getTableName(j+1));
        model->setSort(0,Qt::AscendingOrder);
        model->select();

        dynamicArrayinit();

        bool f=true;
        for (int i = 0; i < rowC; ++i)
        {

            for(int var=0;var<3;var++)
            {
                cout<<model->record(i).value(var).toInt()<<endl;
                if(!(model2->setData(model2->index(i,var),model->record(i).value(var).toString())))
                    //     &&(model2->submitAll())))
                {
                    QMessageBox::warning (this,"Error","指标修改失败!");
                    f=false;
                    break;

                }

                if(!(model3->setData(model3->index(i,var),model->record(i).value(var).toString ())))
                    //&&((model2->submitAll())==true)))
                {
                    QMessageBox::warning (this,"Error","指标修改失败!");
                    f=false;
                    break;
                }

                if(!(model4->setData(model4->index(i,var),model->record(i).value(var).toString ())))
                {
                    QMessageBox::warning (this,"Error","指标修改失败!");
                    f=false;
                    break;
                }
            }
            if(f!=true)
                break;

            if(!(model2->setData(model2->index(i,j+3),QString::number(computeIndex (i)))))
                //&&((model2->submitAll())==true)))
            {
                f=false;
                QMessageBox::warning (this,"Error","指标修改失败!");

            }
            if(f!=true)
                break;

            if(!(model3->setData(model3->index(i,j+3),computeOrder(i))))
                //    &&   (model3->submitAll()==true)))
            {
                f=false;
                QMessageBox::warning (this,"Error","指标修改失败!");
            }
            if(!(model4->setData(model4->index(i,j+3),computeOrderName(i))))
                //    &&   (model3->submitAll()==true)))
            {
                f=false;
                QMessageBox::warning (this,"Error","指标修改失败!");
            }
            if(f!=true)
                break;
        }
        if(f!=true)
            break;

    }
    if(!(model2->submitAll()))
    {
        QMessageBox::warning (this,"error",model2->lastError().text());

    }
    if(!(model3->submitAll()))
    {
        QMessageBox::warning (this,"error",model3->lastError().text());

    }
    if(!(model4->submitAll()))
    {
        QMessageBox::warning (this,"error",model4->lastError().text());

    }
}


void   MainWindow::dynamicArrayinit()
{
    //    model->setTable(getTableName(table+1));


    int rowC =  model->rowCount ();//queryModel->rowCount ();
    int columnC = model->columnCount ();//queryModel->columnCount ();

    kjAnalytics->DynamicArrayInit(rowC, columnC);
    kjAnalytics->CodeX = columnC-3;
    kjAnalytics->Quarter = rowC;


    for (int i = 0; i < rowC; ++i) {
        QList <double> *x = new QList <double>;
        for (int j = 3; j < columnC; ++j) {
            /*
                                                                                 * 得到当先是否为逆向指标标记
                                                                                 */
            QString Code3 = model->record(i).fieldName(j);
            QString itemFilter = "Code3 ='";
            itemFilter += Code3;
            itemFilter += "'";

            modelIndex->setFilter (itemFilter);
            modelIndex->select ();
            int c = modelIndex->fieldIndex ("flag");
            //int count = modelIndex->record ().count ();
            int flag = modelIndex->record (0).value (c).toInt ();

            if(flag==0)
                x->push_back (model->record (i).value (j).toDouble ());
            else
                x->push_back (1/(model->record (i).value (j).toDouble ()));

            //kjAnalytics.indexList.append(Code3);
        }
        kjAnalytics->DynamicArrayAdd (x, i); //添加指标到矩阵

        delete(x);
    }

    kjAnalytics->KjStandarize (); //矩阵标准化
    kjAnalytics->kjEm();
}

void   MainWindow::AlldynamicArrayinit()
{
    //    model->setTable(getTableName(table+1));


    int rowC =  model2->rowCount ();//queryModel->rowCount ();
    int columnC = model2->columnCount ();//queryModel->columnCount ();

    kjAnalyticsAll->DynamicArrayInit(rowC, columnC);
    kjAnalyticsAll->CodeX = columnC-3;
    kjAnalyticsAll->Quarter = rowC;


    for (int i = 0; i < rowC; ++i) {
        QList <double> *x = new QList <double>;
        for (int j = 3; j < columnC; ++j) {
            /*
                                                                                 * 得到当先是否为逆向指标标记
                                                                                 */
            QString Code3 = model->record(i).fieldName(j);
            QString itemFilter = "Code3 ='";
            itemFilter += Code3;
            itemFilter += "'";

            modelIndex->setFilter (itemFilter);
            modelIndex->select ();
            int c = modelIndex->fieldIndex ("flag");
            //int count = modelIndex->record ().count ();
            int flag = modelIndex->record (0).value (c).toInt ();

            if(flag==0)
                x->push_back (model->record (i).value (j).toDouble ());
            else
                x->push_back (1/(model->record (i).value (j).toDouble ()));

            //kjAnalytics.indexList.append(Code3);
        }
        kjAnalyticsAll->DynamicArrayAdd (x, i); //添加指标到矩阵

        delete(x);
    }

    kjAnalyticsAll->KjStandarize (); //矩阵标准化
    kjAnalyticsAll->kjEm();
}

/*
                                                                         * 计算指标
                                                                         * kjAnalytics 为动态二维矩阵 分析计算矩阵
                                                                         */
double MainWindow::computeIndex(int rowNum)
{

    return kjAnalytics->KjIndex (rowNum); //计算指标
}

QString MainWindow::computeOrder(int rowNum)
{
    return kjAnalytics->KjOrder(rowNum);

}

QString MainWindow::computeOrderName(int rowNum)
{
    return kjAnalytics->KjOrderName (rowNum);

}

/*
* 计算总成指数
* 分别计算每个二级指数 在计算总成指数
*/

double MainWindow::computeIndexAll(int rowNum)
{
    return kjAnalyticsAll->KjIndex(rowNum);
}

QString MainWindow::computeOrderAll(int rowNum)
{
    return kjAnalyticsAll->KjOrder(rowNum);
}

QString MainWindow::computeOrderNameAll(int rowNum)
{
    return kjAnalyticsAll->KjOrderName(rowNum);
}


QString MainWindow::getColumnName(int i)
{
    QString ColumnName ="";
    switch (i)
    {
    case 1:
    {
        ColumnName = "X100";
        break;
    }
    case 2:
    {
        ColumnName = "X200";
        break;
    }
    case 3:
    {
        ColumnName = "X300";
        break;
    }
    case 4:
    {
        ColumnName = "X400";
        break;
    }
    case 5:
    {
        ColumnName = "X500";
        break;
    }
    case 6:
    {
        ColumnName = "X600";
        break;
    }
    case 7:
    {
        ColumnName = "X700";
        break;
    }
    }
    return ColumnName;
}

QString MainWindow::getIndexName(int i)
{
    QString IndexName ="";
    switch (i)
    {
    case 1:
    {
        IndexName = "主导企业运营指数";
        break;
    }
    case 2:
    {
        IndexName = "周边影响力指数";
        break;
    }
    case 3:
    {
        IndexName = "业态丰裕指数";
        break;
    }
    case 4:
    {
        IndexName= "海内外人气指数";
        break;
    }
    case 5:
    {
        IndexName = "人文和谐指数";
        break;
    }
    case 6:
    {
        IndexName = "公共景区服务设施承载力指数";
        break;
    }
    case 7:
    {
        IndexName = "调整指数";
        break;
    }
    }
    return IndexName;
}


QString MainWindow::getTableName(int i)
{
    QString tableNamex ="";
    switch (i)
    {
    case 1:
    {
        tableNamex = "data_x100";
        break;
    }
    case 2:
    {
        tableNamex = "data_x200";
        break;
    }
    case 3:
    {
        tableNamex = "data_x300";
        break;
    }
    case 4:
    {
        tableNamex = "data_x400";
        break;
    }
    case 5:
    {
        tableNamex = "data_x500";
        break;
    }
    case 6:
    {
        tableNamex = "data_x600";
        break;
    }
    case 7:
    {
        tableNamex = "data_x700";
        break;
    }
    case 0:
    {
        tableNamex = "data_all";
    }
    }
    return tableNamex;
}



/*
                                                                         * 设置表格表头
                                                                         *
                                                                         */
void MainWindow::setHeader()
{
    model->setHeaderData(model->fieldIndex("id"), Qt::Horizontal, tr("序号"));
    model->setHeaderData(model->fieldIndex("year"), Qt::Horizontal, tr("年"));
    model->setHeaderData(model->fieldIndex("quarter"), Qt::Horizontal, tr("季度"));


    for (int i = 3; i < model->columnCount (); ++i)
    {
        QString code3 = model->record ().fieldName (i);
        modelIndex->setFilter ("code3 ='"+code3+"'");
        modelIndex->select ();
        model->setHeaderData(i, Qt::Horizontal, modelIndex->record (0).value ("name").toString ());
    }


}
/*
* 设置查询条件
*/

void MainWindow::setFilter ()
{
    year = this->year_comboBox->currentText ();
    quarter= this->quarter_comboBox->currentText ();

    QString itemFilter ="";
    if(year!="全部")
    {
        itemFilter += "year ='";
        itemFilter += year;
        itemFilter += "'";

    }

    if(quarter!="全部")
    {
        if(year!="全部")
            itemFilter += "and quarter ='";
        else
            itemFilter += "quarter ='";
        itemFilter += quarter;
        itemFilter += "'";
    }
    //使用setfilter
    model->setFilter (itemFilter);
}

//默认函数
void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        retranslateUi(this);
        break;
    default:
        break;
    }
}

/*
                                                                         * 退出按钮
                                                                         */
void MainWindow::on_quit_pushButton_clicked()
{
    this->close ();
}

/*
                                                                         * 切换显示标签页
                                                                         */
void MainWindow::switch_index(int index)
{
    QString tableName = getTableName(index);
    //设置 显示表 表头 排序
    model->setTable (tableName);
    setHeader ();
    model->setSort(0,Qt::AscendingOrder);
    setFilter ();
    model->select();


}

/*
                                                                         * 查找结果
                                                                         */
void MainWindow::find_result ()
{

    int index = tabWidget->currentIndex ();
    this->switch_index (index);
    int rowNum = all_tableView->currentIndex().row();
    all_tableView->setModel (model);
    all_tableView->hideColumn (0);
    setValue (index, rowNum);
}

/*
                                                                         * 标签切换
                                                                         */
void MainWindow::on_tabWidget_currentChanged()
{
    int index = tabWidget->currentIndex ();
    this->switch_index (index);
    //setFilter ();
    //int rowNum = all_tableView->currentIndex().row();
    year_comboBox->setCurrentText ("全部");
    quarter_comboBox->setCurrentText ("全部");
    find_result();

}

/*
                                                                         * 年度下拉框改变
                                                                         */
void MainWindow::on_year_comboBox_currentTextChanged()
{
    this->find_result ();
}

/*
                                                                         * 季度下拉框改变
                                                                         */
void MainWindow::on_quarter_comboBox_currentTextChanged()
{
    this->find_result ();
}


//void MainWindow::on_all_tableView_clicked()
//{

//    int index = tabWidget->currentIndex ();
//    this->switch_index (index);
//    int rowNum = all_tableView->currentIndex().row();

//    setValue (index, rowNum);
//}

/*
                                                                         * 设置显示数据~~~
                                                                         * 包括年度季度 计算结果 图形显示 解释显示
                                                                         */

//modify
void MainWindow::setValue (int indexNum, int rowNum)
{

    if(rowNum>-1)
    {

        QString textName="";
        QStringList qsl;

        QString str;
        QStringList list;

        QString strName;
        QStringList listName;

        QString order;


        double doubleIndex=0;
        int lowIndexValue = 0;
        int highIndexValue =0;
        //storder 计算影响因子最高的指数

        //                QTableView *view1 = new QTableView;
        //                view1->setModel(model);
        //                //view->hideColumn(0); // don't show the ID
        //                view1->show();


        if(indexNum!=0)//compute sub index
        {
            doubleIndex = model2->record(rowNum).value(indexNum+2).toDouble();
            lowIndexValue = int(getLow(indexNum, rowNum));
            highIndexValue = int(getHigh(indexNum,rowNum));
            //            modelIndex->setFilter("Code2 ='" + getColumnName(index)+"'");

            textName = getIndexName(indexNum);

            //        QString str;
            //        QStringList list;

            //        str = "Some  text\n\twith  strange whitespace.";
            //        list = str.split(QRegExp("\\s+"));
            // list: [ "Some", "text", "with", "strange", "whitespace." ]


            str = model3->record (rowNum).value (indexNum+2).toString ();
            list = str.split (QRegExp("\\,"));

            strName = model4->record (rowNum).value (indexNum+2).toString ();
            listName = strName.split (QRegExp("\\,"));
            //        QTableView *view1 = new QTableView;
            //        view1->setModel(model3);
            //        view1->show();

            //        QTableView *view2 = new QTableView;
            //        view2->setModel(model4);
            //        view2->show();
            //        //     view->hideColumn(0); // don't show the ID

            int columnC = list.count ();

            for (int i = 0; i < columnC-1; ) {
                //int x = listName.value (i).toInt ();

                QString index3 = "X"+QString::number (getColumnName(indexNum).right(3).toInt ()+listName.value (i).toInt ()+1);
                QString itemFilter = "Code3 ='"+index3+"'";
                modelIndex->setFilter (itemFilter);
                modelIndex->select ();

                //            QTableView *view2 = new QTableView;
                //            view2->setModel(modelIndex);
                //            view2->show();
                //     view->hideColumn(0); // don't show the ID

                //int z = modelIndex->rowCount ();
                for (int j = 0; j < modelIndex->rowCount (); j++) {
                    QString s =  modelIndex->record (j).value ("Name").toString ();
                     order = QString::number (i+1)+ "  "+ s+" "+list.value (i);
                     qsl.append (order);
                    i++;
                }




            }
        }
        else// compute main index
        {

            AlldynamicArrayinit ();
            doubleIndex =  computeIndexAll (rowNum);
            lowIndexValue = int(getAllLow(rowNum));
            highIndexValue = int(getAllHigh(rowNum));

            textName = "总成指数";

            str = computeOrderAll (rowNum);
            list = str.split (QRegExp("\\,"));

            strName = computeOrderNameAll(rowNum);
            listName = strName.split (QRegExp("\\,"));


            for (int i = 0; i < 7; ++i) {
                    QString s =  getIndexName (listName[i].toInt ()+1);
                     order = QString::number (i+1)+ "  "+ s+" "+list.value (i);
                     qsl.append (order);
                }

        }




        typeModel1->setStringList (qsl);
        order_comboBox->setModel (typeModel1);

        this->left_verticalSlider->setValue(lowIndexValue);
        this->right_verticalSlider->setValue(highIndexValue);


        int intIndexValue = int(doubleIndex);
        this->index_progressBar->setValue (intIndexValue);


        //        QStringList qsl1;
        //        qsl1.append ("全部");
        //        int rowC = model->rowCount ();

        //        for (int i = 0; i < rowC ; ++i) {
        //            if(!qsl1.contains (model->record (i).value ("year").toString ()))
        //                qsl1.append (model->record (i).value ("year").toString ());
        //        }

        //        typeModel->setStringList (qsl1);
        //        year_comboBox->setModel (typeModel);


        QString indexValue = QString::number (doubleIndex);

        QString explain =  getInfo(doubleIndex,lowIndexValue,highIndexValue);

        //QString report = getReport(doubleIndex,lowIndexValue,highIndexValue);

        this->index_lineEdit->setText (indexValue);
        this->explain_textEdit->setText (explain);

        QString time = model->record (rowNum).value ("year").toString ();//queryModel->record (rowNum).value ("year").toString ();
        time += "年 第";
        time += model->record (rowNum).value ("quarter").toString ();//queryModel->record (rowNum).value ("quarter").toString ();
        time += "季度";
        this->year_lineEdit->setText (time);

        textEdit_IndexName->setText(textName);




    }
    else
    {
        order_comboBox->clear ();
        index_progressBar->setValue (0);
        left_verticalSlider->setValue(0);
        right_verticalSlider->setValue(100);
        year_lineEdit->setText ("年度和季度");
        explain_textEdit->setText ("指标解释");
        index_lineEdit->setText ("计算结果");
        this->textEdit_IndexName->setText("指数名称");

    }


}



double MainWindow::getLow(int indexNum, int rowNum)
{
  //求标准差
    if((rowNum==0)||(rowNum==1))
        return 0;
    double low=0;
    double doubleIndex = 0;
    double allIndex = 0;
    double lowIndex = 100;
    double doublePower=0;
    double doubleMean = 0;
    double doubleXGM =0;
    for (int i = 0; i < rowNum; ++i) {
        doubleIndex = model2->record(i).value(indexNum+2).toDouble();
        allIndex += doubleIndex;
        if (doubleIndex <lowIndex) {
            lowIndex = doubleIndex;
        }
    }
    doubleMean = allIndex/(rowNum-1);
    for (int j = 0; j < rowNum; ++j) {
        doubleIndex = model2->record(j).value(indexNum+2).toDouble();
        doublePower += pow((doubleIndex - doubleMean),2);
    }

    cout<<doublePower<<endl;
    doubleXGM =  sqrt(doublePower/rowNum);

    low = lowIndex - doubleXGM;
    cout << "low "<<lowIndex<< " "<<doubleXGM <<endl;
    if(low<0)
    {
        low =0;
    }
    if(low>100)
    {
        low =100;
    }
    return low;
}


double MainWindow::getAllLow(int rowNum)
{
  //求标准差
    if((rowNum==0)||(rowNum==1))
        return 0;
    double low=0;
    double doubleIndex = 0;
    double allIndex = 0;
    double lowIndex = 100;
    double doublePower=0;
    double doubleMean = 0;
    double doubleXGM =0;
    for (int i = 0; i < rowNum; ++i) {
        doubleIndex = computeIndexAll(i+1);
        allIndex += doubleIndex;
        if (doubleIndex<lowIndex) {
            lowIndex = doubleIndex;
        }
    }
    doubleMean = allIndex/(rowNum-1);
    for (int j = 0; j < rowNum; ++j) {
        doubleIndex = computeIndexAll(j+1);
        doublePower += pow((doubleIndex -  doubleMean),2);
    }
    doubleXGM =  sqrt(doublePower/rowNum);

    low = lowIndex - doubleXGM;
    if(low<0)
        return 0;
    if(low>100)
        return 100;

    return low;
}
double MainWindow::getHigh(int indexNum, int rowNum)
{
    //求标准差
    if((rowNum==0)||(rowNum==1))
        return 100;
      double high=0;
      double doubleIndex = 0;
      double allIndex = 0;
      double highIndex = 0;
      double doublePower=0;
      double doubleMean = 0;
      double doubleXGM =0;
      for (int i = 0; i < rowNum; ++i) {
          doubleIndex = model2->record(i).value(indexNum+2).toDouble();
          allIndex += doubleIndex;
          if (doubleIndex>highIndex) {
              highIndex = doubleIndex;
          }
      }
      doubleMean = allIndex/(rowNum-1);
      for (int j = 0; j < rowNum; ++j) {
          doubleIndex = model2->record(j).value(indexNum+2).toDouble();
          doublePower += pow((doubleIndex -  doubleMean),2);
      }
      doubleXGM =  sqrt(doublePower/rowNum);

      high = highIndex + doubleXGM;
      cout<<"high"<<highIndex<<" "<<doubleXGM <<endl;
      if(high>100)
          return 100;
      if(high<0)
          return 0;
      return high;
}

double MainWindow::getAllHigh(int rowNum)
{
    //求标准差
    if((rowNum==0)||(rowNum==1))
        return 100;
      double high=0;
      double doubleIndex = 0;
      double allIndex = 0;
      double highIndex = 0;
      double doublePower=0;
      double doubleMean = 0;
      double doubleXGM =0;
      for (int i = 0; i < rowNum; ++i) {
          doubleIndex = computeIndexAll(i+1);
          allIndex += doubleIndex;
          if (doubleIndex>highIndex) {
              highIndex = doubleIndex;
          }
      }
      doubleMean = allIndex/(rowNum-1);
      for (int j = 0; j < rowNum; ++j) {
          doubleIndex = computeIndexAll(j+1);
          doublePower += pow((doubleIndex -  doubleMean),2);
      }
      doubleXGM =  sqrt(doublePower/rowNum);

      high = highIndex + doubleXGM;

      if(high>100)
          return 100;
      if(high<0)
          return 0;

      return high;
}

/*
                                                                         * 当前标签对应的指数
                                                                         */
void MainWindow::IndexTable ()
{
    int iName = this->tabWidget->currentIndex ();

    // iName =2;
    switch (iName) {
    case 1:
        indexName = "主导企业运营指数:";
        //queryModel->setQuery ("select * from data_x100");
        break;
    case 2:
        indexName = "周边影响力指数:";
        // queryModel->setQuery ("select * from data_x200");
        break;
    case 3:
        indexName = "业态丰裕指数:";
        // queryModel->setQuery ("select * from data_x300");
        break;
    case 4:
        indexName = "海内外人气指数:";
        // queryModel->setQuery ("select * from data_x400");
        break;
    case 5:
        indexName = "人文和谐指数:";
        //  queryModel->setQuery ("select * from data_x500");
        break;
    case 6:
        indexName = "景区支撑力指数:";
        //  queryModel->setQuery ("select * from data_x600");
        break;
    case 7:
        indexName = "调整指数:";
        //   queryModel->setQuery ("select * from data_x700");
        break;
    default:
        //   queryModel->setQuery ("select * from data_all");
        indexName = "总成指数:";
        break;
    };
}

/*
                                                                         * 一键计算结果
                                                                         */
void MainWindow::on_oneResult_pushButton_clicked()
{
    int numIndex = tabWidget->currentIndex ();
    int rowC = model->rowCount();
    switch_index (numIndex);
    //int columnC = model->columnCount ();
    //使用标准项目模型
    modelST = new QStandardItemModel(rowC, 4, this);
    modelST->setHeaderData(0, Qt::Horizontal, tr("编号"));
    modelST->setHeaderData(1, Qt::Horizontal, tr("年份季度"));
    modelST->setHeaderData(2, Qt::Horizontal, tr("总成指数"));
    modelST->setHeaderData(3, Qt::Horizontal, tr("指数说明"));
    QStringList times;
    QStringList indexs;
    QStringList explains;

    for (int i = 0; i < rowC; ++i) {
        times << (model->record (i).value ("year").toString ()+"年"+ model->record (i).value ("quarter").toString ()+ "季度");
    }

    if(numIndex==0)


    {
        AlldynamicArrayinit ();
        for (int i = 0; i < rowC; ++i) {
            double dIndex =computeIndexAll (i);
            indexs << QString::number (dIndex);
            double low = getAllLow(i);
            double high = getAllHigh(i);
            explains << getInfo(dIndex,low,high);

        }
    }
    else
    {
        for (int i = 0; i < rowC; ++i) {
            double dIndex = model2->record(i).value(numIndex+2).toDouble();
            indexs << model2->record(i).value(numIndex+2).toString();
            double low = getLow(numIndex,i);
            double high = getHigh(numIndex,i);
            //cout<< getInfo(dIndex,low,high).toStdString();
            explains << getInfo(dIndex,low,high);

        }
    }

    for (int row = 0; row < rowC; ++row) {
        QStandardItem  *item = new QStandardItem(QString::number (row));
        modelST ->setItem(row, 0, item);
        item = new QStandardItem(times[row]);
        modelST ->setItem(row, 1, item);
        item = new QStandardItem(indexs[row]);
        modelST->setItem(row, 2, item);
        item = new QStandardItem(explains[row]);
        modelST->setItem(row, 3, item);

    }
    all_tableView->setModel (modelST);
}

//QString MainWindow::getReport(double index, double low, double high)
//{
//    QString report ="";
//    if(index>high)
//    {
//        report ="景气指数高于最高警戒线"+QString::number(high)+",指数过高.";
//    }
//    else if(index<low)
//    {
//        report = "景气指数低于最低警戒线"+QString::number(low)+",指数过低";
//    }
//    else
//        report = "景气指数位于最低警戒线"+QString::number(low)+"和最高警戒线"+QString::number(high)+"之间,指数正常.";

//    return report;
//}



QString MainWindow::getInfo(double dIndex, double low, double high)
{
    QString explains ="";
    if(dIndex > high)
    {
        explains = "景气指数高于最高警戒线"+ QString::number(high)+",景气指数过高,需要警惕!";
    }
    else if(dIndex <low)
    {
        explains = "景气指数低于最低警戒线"+QString::number(low)+",景气指数过低,需要警惕!";
    }
    else
    {
        explains = "指数位于最低警戒线"+QString::number(low)+"和最高警戒线"+QString::number(high)+"之间,指数正常.";
    }
    return explains;
}

/*
                                                                         * 导出计算结果
                                                                         */
void MainWindow::on_dataDump_pushButton_clicked()
{
    this->on_oneResult_pushButton_clicked ();

    //QString path = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    QString fileName = QFileDialog::getSaveFileName(this,
            tr("设置导出文件"),
            "",
            tr("*.xlsx"));

    if( fileName !="")
    {
        //QString fileName = path + "/计算所得指数.xlsx";

        QXlsx::Document *xlsx = new QXlsx::Document(fileName);


        int rowC = (modelST->rowCount ());
        int columnC = (modelST->columnCount ());

        xlsx->write (1,2, "年份季度");
        xlsx->write (1,3, "计算所得指标");
        xlsx->write (1,4, "指标说明");



        for (int i = 0; i < rowC; ++i) {
            for (int j = 0; j < columnC; ++j) {
                xlsx->write ((i+2),(j+1), modelST->item (i, j)->text ());
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
                                                                         * 抓取屏幕
                                                                         */
void MainWindow::on_capture_pushButton_clicked()
{

    QString fileName;
    QPixmap pixmap;
    QPixmap pix;
    //this->width ()
    //pix = pixmap.grabWidget (this,680,130,300,540); // 獲取當前窗口  (0 , 0, -1, -1)

    //获取抓取的横纵坐标
    //int grapX= year_lineEdit->geometry ().x ();
    //int grapY = year_lineEdit->geometry ().y ();

    //使用grabWidget 获取截图 gridLayout_2
    pix = pixmap.grabWidget (this->frame_capture, 0 ,0, this->frame_capture->width (), this->frame_capture->height () );

    //pix = pixmap.grabWindow(QApplication::desktop()->winId()); // 獲取整個屏幕窗口
    // 當前時間命名
    //fileName = "/"+QDateTime::currentDateTime().toString("yyyy-mm-dd hh-mm-ss")  + ".PNG";

    //保存文件
    if (pix.isNull())
    {
        QMessageBox::information(this, "error", "grab Screen failed!", QMessageBox::Ok);
    }
    else
    {
        //QString path = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
        QString fileName = QFileDialog::getSaveFileName(this,
                tr("快照"),
                "",
                tr("图片(*.PNG)"));
        if(fileName!="")
        {
            //fileName = path+"/指数截图.png";
            if (!pix.save(fileName, "PNG"))
            {
                QMessageBox::information(this, "right", "保存失败!", QMessageBox::Ok);
            }
            else
            {
                QMessageBox::information(this, "Grab", "保存成功!", QMessageBox::Ok);
            }
        }
    }
}



void MainWindow::on_all_tableView_clicked(const QModelIndex &index)
{

    int indexNum = tabWidget->currentIndex ();
    //this->switch_index ( indexNum);
    int rowNum =index.row ();

    setValue (indexNum, rowNum);
}

void MainWindow::on_captureIntro_pushButton_clicked()
{
    QString fileName;
    QPixmap pixmap;
    QPixmap pix;
    //this->width ()
    //pix = pixmap.grabWidget (this,680,130,300,540); // 獲取當前窗口  (0 , 0, -1, -1)

    //获取抓取的横纵坐标
    //int grapX= year_lineEdit->geometry ().x ();
    //int grapY = year_lineEdit->geometry ().y ();

    //使用grabWidget 获取截图 gridLayout_2
    pix = pixmap.grabWidget (this->explain_textEdit, 0 ,0, this->explain_textEdit->width (), this->explain_textEdit->height () );

    if (pix.isNull())
    {
        QMessageBox::information(this, "error", "grab Screen failed!", QMessageBox::Ok);
    }
    else
    {
        QString path = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

        if(path!="")
        {
            fileName = path+"/说明截图.png";
            if (!pix.save(fileName, "PNG"))
            {
                QMessageBox::information(this, "right", "保存失败!", QMessageBox::Ok);
            }
            else
            {
                QMessageBox::information(this, "Grab", "保存成功!", QMessageBox::Ok);
            }
        }
    }
}

