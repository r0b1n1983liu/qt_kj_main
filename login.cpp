#include "login.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <iostream>
#include "mainwindow.h"

using namespace std;


/*
 * 用户和管理员登入界面
 */

Login::Login(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);

    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowMinimizeButtonHint;
    flags |=Qt::WindowMaximizeButtonHint;
    setWindowFlags(flags);

    model = new QSqlRelationalTableModel;
    model->setTable("user");
}

//QSqlRelationalTableModel *model;
//QSqlRelationalTableModel *modelData;

Login::~Login ()
{
    delete(model);
//    delete(modelData);

}

void Login::on_login_pushButton_clicked ()
{
    QString passwdInput=this->password_lineEdit->text ();
    QString name=this->name_lineEdit->text ();

    model->setFilter ("name= '" +name +"'");

    model->select ();
    QString passwdTab = model->record (0).value ("passwd").toString ();

    //动态比对密码
    if(passwdTab =="") {
        QMessageBox::warning (this,"Error","请输入密码");
    }
    else if(passwdInput!=passwdTab)
    {
        QMessageBox::warning (this,"Error","密码输入错误,请重新输入");
    }
    else
    {
        this->close ();
        //mw.setWindowFlags( mw.windowFlags()&~Qt::WindowMinimizeButtonHint );
        mw.show();
    }

}

void Login::on_logout_pushButton_clicked ()
{
    this->close();
}

/*
 * 提示
 */
void Login::on_hint_pushButton_clicked()
{
    model->setFilter ("name= '" + name_lineEdit->text () + "'");
    model->select ();
    QString hint = model->record (0).value ("hint").toString ();
    hint_label->setText (hint);

}


void Login::on_password_lineEdit_textChanged()
{
    QString passwdInput=this->password_lineEdit->text ();
    QString name=this->name_lineEdit->text ();
    if((name =="admin")&&(passwdInput!=""))
    {

        model->setFilter ("name= '" +name +"'");

        model->select ();
        QString passwdTab = model->record (0).value ("passwd").toString ();

        if(passwdTab==passwdInput)
        {
            user_pushButton->setEnabled (true);
            index_pushButton->setEnabled (true);
            dataTrans_pushButton->setEnabled (true);
        }
    }
}

//显示用户管理界面
void Login::on_user_pushButton_clicked()
{
    u.show ();
}


//显示数据管理界面
void Login::on_dataTrans_pushButton_clicked()
{
    dt.show ();
}


//显示指数管理界面

void Login::on_index_pushButton_clicked()
{
    index.show ();
}
