#ifndef INDEX_H
#define INDEX_H

#include <QDialog>
#include <ui_index.h>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRelationalTableModel>
#include "xlsxdocument.h"

class Index : public QDialog , private Ui::index_Dialog
{
    Q_OBJECT
public:
    explicit Index(QWidget *parent = 0);
    ~Index();

private:
    void setFilter ();
    QSqlTableModel *model;
    QSqlTableModel *modelData;
    QXlsx::Document *xlsx;

signals:

public slots:
    void on_quit_pushButton_clicked();

private slots:
    void on_index_treeView_clicked();
//    void on_add_pushButton_clicked();
//    void on_delete_pushButton_clicked();
    void on_modify_pushButton_clicked();
    void on_search_pushButton_clicked();
    void on_clear_pushButton_clicked();

    void on_delAll_pushButton_clicked();
    void on_import_pushButton_clicked();
    void on_export_pushButton_clicked();
};

#endif // INDEX_H
