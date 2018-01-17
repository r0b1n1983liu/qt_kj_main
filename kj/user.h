#ifndef USER_H
#define USER_H

#include <QDialog>
#include <ui_user.h>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRelationalTableModel>
#include <QSqlQueryModel>

class user : public QDialog, private Ui::user_Dialog
{
    Q_OBJECT
public:
    explicit user(QWidget *parent = 0);
    ~user();

private:
    QSqlRelationalTableModel *model;
    //QSqlQueryModel *queryModel;

signals:

public slots:
    void on_quit_pushButton_clicked();

private slots:
    void on_modify_pushButton_clicked();
    void on_user_treeView_clicked();
    void on_new_pushButton_clicked();
    void on_del_pushButton_clicked();
};

#endif // USER_H
