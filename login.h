#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <ui_login.h>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlRelationalTableModel>
#include "mainwindow.h"
#include "user.h"
#include "index.h"
#include "datatrans.h"


class Login : public QDialog, private Ui::login_Dialog
{
    Q_OBJECT
public:
    explicit Login(QWidget *parent = 0);
    ~Login();


private:
    QSqlRelationalTableModel *model;
    QSqlRelationalTableModel *modelData;
    MainWindow mw;
    user u;
    Index index;
    DataTrans dt;

signals:

private slots:
    void on_login_pushButton_clicked();
    void on_logout_pushButton_clicked();

    void on_hint_pushButton_clicked();

    void on_password_lineEdit_textChanged();
    void on_user_pushButton_clicked();
    void on_dataTrans_pushButton_clicked();
    void on_index_pushButton_clicked();
};

#endif // LOGIN_H
