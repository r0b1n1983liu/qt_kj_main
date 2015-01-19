/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_login_Dialog
{
public:
    QGridLayout *gridLayout_3;
    QGraphicsView *xckj_graphicsView;
    QGridLayout *gridLayout_2;
    QPushButton *user_pushButton;
    QPushButton *login_pushButton;
    QPushButton *dataTrans_pushButton;
    QPushButton *index_pushButton;
    QPushButton *logout_pushButton;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *name_lineEdit;
    QLineEdit *password_lineEdit;
    QLabel *label_2;
    QPushButton *hint_pushButton;
    QLabel *title_label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *hint_label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *login_Dialog)
    {
        if (login_Dialog->objectName().isEmpty())
            login_Dialog->setObjectName(QStringLiteral("login_Dialog"));
        login_Dialog->resize(800, 600);
        login_Dialog->setStyleSheet(QStringLiteral(""));
        login_Dialog->setInputMethodHints(Qt::ImhExclusiveInputMask);
        gridLayout_3 = new QGridLayout(login_Dialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        xckj_graphicsView = new QGraphicsView(login_Dialog);
        xckj_graphicsView->setObjectName(QStringLiteral("xckj_graphicsView"));
        xckj_graphicsView->setMaximumSize(QSize(16777215, 490));
        xckj_graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/qrc/image/qrc/image/face.png);"));

        gridLayout_3->addWidget(xckj_graphicsView, 1, 1, 3, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        user_pushButton = new QPushButton(login_Dialog);
        user_pushButton->setObjectName(QStringLiteral("user_pushButton"));
        user_pushButton->setEnabled(false);
        user_pushButton->setMinimumSize(QSize(0, 15));
        user_pushButton->setMaximumSize(QSize(158, 16));
        user_pushButton->setStyleSheet(QLatin1String("background-color: rgb(102, 204, 255);\n"
"subcontrol-position: center;\n"
"subcontrol-origin: padding;\n"
"border-radius: 5px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qrc/image/qrc/image/modify_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        user_pushButton->setIcon(icon);

        gridLayout_2->addWidget(user_pushButton, 2, 0, 1, 1);

        login_pushButton = new QPushButton(login_Dialog);
        login_pushButton->setObjectName(QStringLiteral("login_pushButton"));
        login_pushButton->setEnabled(true);
        login_pushButton->setStyleSheet(QLatin1String("background-color: rgb(102, 204, 255);\n"
"subcontrol-position: center;\n"
"subcontrol-origin: padding;\n"
"border-radius: 5px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qrc/image/qrc/image/gotocell.png"), QSize(), QIcon::Normal, QIcon::Off);
        login_pushButton->setIcon(icon1);

        gridLayout_2->addWidget(login_pushButton, 0, 0, 1, 1);

        dataTrans_pushButton = new QPushButton(login_Dialog);
        dataTrans_pushButton->setObjectName(QStringLiteral("dataTrans_pushButton"));
        dataTrans_pushButton->setEnabled(false);
        dataTrans_pushButton->setMinimumSize(QSize(0, 15));
        dataTrans_pushButton->setMaximumSize(QSize(158, 16));
        dataTrans_pushButton->setStyleSheet(QLatin1String("background-color: rgb(102, 204, 255);\n"
"subcontrol-position: center;\n"
"subcontrol-origin: padding;\n"
"border-radius: 5px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/qrc/image/qrc/image/data_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        dataTrans_pushButton->setIcon(icon2);

        gridLayout_2->addWidget(dataTrans_pushButton, 3, 0, 1, 1);

        index_pushButton = new QPushButton(login_Dialog);
        index_pushButton->setObjectName(QStringLiteral("index_pushButton"));
        index_pushButton->setEnabled(false);
        index_pushButton->setMinimumSize(QSize(0, 15));
        index_pushButton->setMaximumSize(QSize(158, 16));
        index_pushButton->setStyleSheet(QLatin1String("background-color: rgb(102, 204, 255);\n"
"subcontrol-position: center;\n"
"subcontrol-origin: padding;\n"
"border-radius: 5px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/qrc/image/qrc/image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        index_pushButton->setIcon(icon3);

        gridLayout_2->addWidget(index_pushButton, 5, 0, 1, 1);

        logout_pushButton = new QPushButton(login_Dialog);
        logout_pushButton->setObjectName(QStringLiteral("logout_pushButton"));
        logout_pushButton->setStyleSheet(QLatin1String("background-color: rgb(102, 204, 255);\n"
"subcontrol-position: center;\n"
"subcontrol-origin: padding;\n"
"border-radius: 5px;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/qrc/image/qrc/image/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout_pushButton->setIcon(icon4);
        logout_pushButton->setAutoRepeat(false);

        gridLayout_2->addWidget(logout_pushButton, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 5, 2, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(login_Dialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        name_lineEdit = new QLineEdit(login_Dialog);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));
        name_lineEdit->setStyleSheet(QLatin1String("     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: beige;\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
"\n"
"background: lightblue"));

        gridLayout->addWidget(name_lineEdit, 0, 1, 1, 1);

        password_lineEdit = new QLineEdit(login_Dialog);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setStyleSheet(QLatin1String("     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color: beige;\n"
"     font: bold 14px;\n"
"     min-width: 10em;\n"
"     padding: 6px;\n"
"background: lightblue"));
        password_lineEdit->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        password_lineEdit->setInputMask(QStringLiteral(""));
        password_lineEdit->setFrame(false);
        password_lineEdit->setEchoMode(QLineEdit::Password);
        password_lineEdit->setReadOnly(false);

        gridLayout->addWidget(password_lineEdit, 2, 1, 1, 1);

        label_2 = new QLabel(login_Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 3, 1, 2);

        hint_pushButton = new QPushButton(login_Dialog);
        hint_pushButton->setObjectName(QStringLiteral("hint_pushButton"));
        hint_pushButton->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/qrc/image/qrc/image/passwd_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        hint_pushButton->setIcon(icon5);

        gridLayout_3->addWidget(hint_pushButton, 3, 3, 1, 1);

        title_label = new QLabel(login_Dialog);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setMinimumSize(QSize(0, 71));
        title_label->setMaximumSize(QSize(800, 600));

        gridLayout_3->addWidget(title_label, 1, 3, 1, 3);

        verticalSpacer = new QSpacerItem(40, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 4, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        hint_label = new QLabel(login_Dialog);
        hint_label->setObjectName(QStringLiteral("hint_label"));

        gridLayout_3->addWidget(hint_label, 3, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_2, 0, 1, 1, 1);

        QWidget::setTabOrder(name_lineEdit, password_lineEdit);
        QWidget::setTabOrder(password_lineEdit, login_pushButton);
        QWidget::setTabOrder(login_pushButton, logout_pushButton);
        QWidget::setTabOrder(logout_pushButton, user_pushButton);
        QWidget::setTabOrder(user_pushButton, dataTrans_pushButton);
        QWidget::setTabOrder(dataTrans_pushButton, index_pushButton);
        QWidget::setTabOrder(index_pushButton, hint_pushButton);
        QWidget::setTabOrder(hint_pushButton, xckj_graphicsView);

        retranslateUi(login_Dialog);

        QMetaObject::connectSlotsByName(login_Dialog);
    } // setupUi

    void retranslateUi(QDialog *login_Dialog)
    {
        login_Dialog->setWindowTitle(QApplication::translate("login_Dialog", "\347\231\273\345\205\245\347\252\227\345\217\243", 0));
        user_pushButton->setText(QApplication::translate("login_Dialog", "\347\224\250\346\210\267\347\256\241\347\220\206", 0));
        login_pushButton->setText(QApplication::translate("login_Dialog", "\347\231\273\345\205\245", 0));
        dataTrans_pushButton->setText(QApplication::translate("login_Dialog", "\346\225\260\346\215\256\347\256\241\347\220\206", 0));
        index_pushButton->setText(QApplication::translate("login_Dialog", "\346\214\207\346\240\207\347\256\241\347\220\206", 0));
        logout_pushButton->setText(QApplication::translate("login_Dialog", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("login_Dialog", "<html><head/><body><p>\345\257\206\347\240\201</p></body></html>", 0));
        name_lineEdit->setInputMask(QString());
        name_lineEdit->setText(QString());
        password_lineEdit->setText(QString());
        label_2->setText(QApplication::translate("login_Dialog", "<html><head/><body><p>\347\224\250\346\210\267\345\220\215</p></body></html>", 0));
        hint_pushButton->setText(QApplication::translate("login_Dialog", "\346\217\220\347\244\272", 0));
        title_label->setText(QApplication::translate("login_Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; color:#0080ff;\">\344\273\200\345\210\271\346\265\267\345\274\200\346\231\257\346\214\207\346\225\260\347\263\273\347\273\237</span></p></body></html>", 0));
        hint_label->setText(QApplication::translate("login_Dialog", "<html><head/><body><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class login_Dialog: public Ui_login_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
