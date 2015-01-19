#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <ui_login.h>


class Login : public QDialog, private Ui::login_Dialog
{
    Q_OBJECT
public:
    explicit Login(QWidget *parent = 0);

signals:

public slots:
//    void on_button_quit();
//    void on_button_login();



};

#endif // LOGIN_H
