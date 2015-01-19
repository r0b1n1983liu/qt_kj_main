#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "database.h"
#include <QSqlTableModel>
#include <QMessageBox>
#include <QStandardItemModel>
#include "xlsxdocument.h"
#include "dynamicarray.h"
#include <QStringListModel>
#include <QSqlRelationalTableModel>

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);


    QSqlRelationalTableModel *model;
    QSqlRelationalTableModel *modelIndex;
    QSqlRelationalTableModel *model2;
    QSqlRelationalTableModel *model3;
    QSqlRelationalTableModel *model4;


    QStandardItemModel *modelST;
    QStringListModel *typeModel;
        QStringListModel *typeModel1;

    QString tableName;
    QString year;
    QString quarter;
    QString indexName;
    DynamicArray *kjAnalytics;
    DynamicArray *kjAnalyticsAll;






private:
    void setTable(QSqlRelationalTableModel);

    void AllIndexTable();

    QString getTableName(int t);

    void dynamicArrayinit();
    void AlldynamicArrayinit();

    double getLow(int indexNum, int rowNum);
    double getHigh(int indexNum, int rowNum);
    //QString getReport(double index, double low, double high);

    double getAllLow(int rowNum);
    double getAllHigh(int rowNum);

    double computeIndex(int rowNum);
    QString computeOrder(int rowNum);
    QString computeOrderName(int rowNum);

    double computeIndexAll(int rowNum);
    QString computeOrderAll(int rowNum);
    QString computeOrderNameAll(int rowNum);

    QString getColumnName(int i);

    void IndexTable();
    void getIndex();
    void setValue(int index, int rowNum);

    QString getInfo(double dIndex, double low, double high);

    void setHeader();
    void setFilter();
    void find_result();
    void switch_index(int index);
    QString getIndexName(int i);


    //     QStringList getOrder(int rowNum);

    QStringList getMainOrder(int rowNum);


private slots:

    void on_quit_pushButton_clicked();
    void on_tabWidget_currentChanged();

    void on_year_comboBox_currentTextChanged();
    void on_quarter_comboBox_currentTextChanged();

    void on_oneResult_pushButton_clicked();
    void on_dataDump_pushButton_clicked();
    void on_capture_pushButton_clicked();


    void on_all_tableView_clicked(const QModelIndex &index);
    void on_captureIntro_pushButton_clicked();
};

#endif // MAINWINDOW_H
