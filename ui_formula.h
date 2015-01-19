/********************************************************************************
** Form generated from reading UI file 'formula.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULA_H
#define UI_FORMULA_H

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
    QPushButton *pushButton_4;

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
        pushButton_4 = new QPushButton(data_Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 290, 82, 26));

        retranslateUi(data_Dialog);

        QMetaObject::connectSlotsByName(data_Dialog);
    } // setupUi

    void retranslateUi(QDialog *data_Dialog)
    {
        data_Dialog->setWindowTitle(QApplication::translate("data_Dialog", "\345\205\254\345\274\217\344\277\256\346\224\271", 0));
        pushButton->setText(QApplication::translate("data_Dialog", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("data_Dialog", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("data_Dialog", "PushButton", 0));
        pushButton_4->setText(QApplication::translate("data_Dialog", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class data_Dialog: public Ui_data_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULA_H
