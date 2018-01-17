#include "user.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <iostream>

using namespace std;


/*
 * 用户管理模块
 * 增删查改用户
 */
user::user(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    model = new QSqlRelationalTableModel(this);

    model->setTable("user");
    model->select ();
    user_treeView->setModel (model);
    model->setHeaderData(model->fieldIndex("name"), Qt::Horizontal, tr("姓名"));
    model->setHeaderData(model->fieldIndex("passwd"), Qt::Horizontal, tr("密码"));
    model->setHeaderData(model->fieldIndex("hint"), Qt::Horizontal, tr("提示"));
    user_treeView->hideColumn (0);
}
//QSqlRelationalTableModel *model;
//QSqlQueryModel *queryModel;
user::~user ()
{
   delete(model);
//    //delete(queryModel);
}

void user::on_quit_pushButton_clicked()
{
    this->close ();
}

/*
 * 修改用户
 */
void user::on_modify_pushButton_clicked()
{
    int row = user_treeView->currentIndex ().row ();
    QString name = userName_lineEdit->text ();
    QString newPasswd = newPassword_lineEdit->text ();
    QString newPasswdAgain = newPasswordAgain_lineEdit->text ();
    QString hint = hints_lineEdit->text ();
    if(newPasswd==newPasswdAgain)
    {
        if((model->setData(model->index(row,2),newPasswd))&&
            (model->setData(model->index(row,3),hint))&&
            (model->setData(model->index(row,1),name))&&
             (model->submitAll()))
            QMessageBox::warning (this,"Correct","密码修改成功!");
        else
            QMessageBox::warning (this,"Error","密码修改失败!");
    }
    else
    {
         QMessageBox::warning (this,"Error","密码验证错误,请重新输入!");
    }
}

/*
 * 显示用户表
 */
void user::on_user_treeView_clicked()
{
    int row = user_treeView->currentIndex ().row ();

    QString username = model->record (row).value("name").toString ();

    userName_lineEdit->setText (username);

    QString passwd = model->record (row).value("passwd").toString ();

    oldPassword_lineEdit->setText (passwd);

    QString hint = model->record (row).value("hint").toString ();

    newPassword_lineEdit->setText ("");
    newPasswordAgain_lineEdit->setText ("");

    hints_lineEdit->setText (hint);
}

/*
 * 添加用户
 */
void user::on_new_pushButton_clicked()
{
    int row = user_treeView->currentIndex ().row ();
    QString name = userName_lineEdit->text ();
    QString newPasswd = newPassword_lineEdit->text ();
    QString newPasswdAgain = newPasswordAgain_lineEdit->text ();
    QString hint = hints_lineEdit->text ();
    int id = row;
    if(newPasswd==newPasswdAgain)
    {


        if((model->insertRow (row))&&
                (model->setData(model->index(row,0),id))&&
                (model->setData(model->index(row,1),name))&&
                (model->setData(model->index(row,2),newPasswd))&&
            (model->setData(model->index(row,3),hint))&&
                (model->submitAll()))
            QMessageBox::warning (this,"Correct","用户添加成功!");
        else
            QMessageBox::warning (this,"Error","密码添加失败!");
    }
    else
    {
         QMessageBox::warning (this,"Error","密码验证错误,请重新输入!");
    }
}

/*
 * 删除用户
 */
void user::on_del_pushButton_clicked()
{
    int row = user_treeView->currentIndex ().row ();
    if((model->removeRow (row))&&
            (model->submitAll()))
        QMessageBox::warning (this,"Correct","删除用户成功!");
    else
        QMessageBox::warning (this,"Error","删除用户失败!");
}
