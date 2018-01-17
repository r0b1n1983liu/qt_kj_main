#ifndef DATATRANS_H
#define DATATRANS_H

#include "ui_datatrans.h"

#include <QSqlRelationalTableModel>

#include <xlsxdocument.h>

class DataTrans : public QDialog, private Ui::DataTrans
{
    Q_OBJECT

public:
    explicit DataTrans(QWidget *parent = 0);
    ~DataTrans();
    QSqlRelationalTableModel *modelIndex;
    QSqlRelationalTableModel *model;

    //使用QXlsx来进行Excel操作
    QXlsx::Document *xlsx;

protected:
    void changeEvent(QEvent *e);
    void setHeader();

private slots:


    void on_quit_pushButton_clicked();
    void on_importExcel_pushButton_clicked();
    void on_modify_pushButton_clicked();
    void on_search_pushButton_clicked();
    void on_data_tableView_clicked();
    void setFilter();
    void on_delete_pushButton_clicked();
    void on_clear_pushButton_clicked();
    void on_exportExcel_pushButton_clicked();
    void on_delAll_pushButton_clicked();
};

#endif // DATATRANS_H
