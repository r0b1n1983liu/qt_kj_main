#include <QApplication>
#include "mainwindow.h"
#include "database.h"
#include "login.h"
#include <QProcess>

using namespace std;
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //设置显示窗口图标
    QIcon qcion(":/qrc/image/qrc/image/stock.png");
    app.setWindowIcon (qcion);
    //初始化程序
    if(!Init())
    {
        QMessageBox::critical (0,QObject::tr ("Init Error"),QObject::tr ("初始化失败,程序关闭!"));
        return -1;
    }

    //显示登入窗口
    Login login;
    login.show();


    //        MainWindow mw;
    //        mw.show ();

    return app.exec();
}




