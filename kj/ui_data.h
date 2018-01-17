/********************************************************************************
** Form generated from reading UI file 'data.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_H
#define UI_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_data_Dialog
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *quit_pushButton;

    void setupUi(QDialog *data_Dialog)
    {
        if (data_Dialog->objectName().isEmpty())
            data_Dialog->setObjectName(QStringLiteral("data_Dialog"));
        data_Dialog->resize(684, 587);
        tableView = new QTableView(data_Dialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 20, 481, 391));
        pushButton = new QPushButton(data_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 40, 82, 26));
        pushButton_2 = new QPushButton(data_Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 120, 82, 26));
        pushButton_3 = new QPushButton(data_Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(550, 210, 82, 26));
        quit_pushButton = new QPushButton(data_Dialog);
        quit_pushButton->setObjectName(QStringLiteral("quit_pushButton"));
        quit_pushButton->setGeometry(QRect(550, 480, 82, 26));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qrc/image/qrc/image/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        quit_pushButton->setIcon(icon);

        retranslateUi(data_Dialog);

        QMetaObject::connectSlotsByName(data_Dialog);
    } // setupUi

    void retranslateUi(QDialog *data_Dialog)
    {
        data_Dialog->setWindowTitle(QApplication::translate("data_Dialog", "\345\205\254\345\274\217\344\277\256\346\224\271", 0));
        pushButton->setText(QApplication::translate("data_Dialog", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("data_Dialog", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("data_Dialog", "PushButton", 0));
        quit_pushButton->setText(QApplication::translate("data_Dialog", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class data_Dialog: public Ui_data_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_H
