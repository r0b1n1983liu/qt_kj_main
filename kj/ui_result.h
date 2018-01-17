/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_result_Dialog
{
public:
    QPushButton *quit_pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *result_Dialog)
    {
        if (result_Dialog->objectName().isEmpty())
            result_Dialog->setObjectName(QStringLiteral("result_Dialog"));
        result_Dialog->resize(734, 600);
        quit_pushButton = new QPushButton(result_Dialog);
        quit_pushButton->setObjectName(QStringLiteral("quit_pushButton"));
        quit_pushButton->setGeometry(QRect(531, 520, 101, 26));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qrc/image/qrc/image/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        quit_pushButton->setIcon(icon);
        textBrowser = new QTextBrowser(result_Dialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(100, 150, 451, 311));

        retranslateUi(result_Dialog);

        QMetaObject::connectSlotsByName(result_Dialog);
    } // setupUi

    void retranslateUi(QDialog *result_Dialog)
    {
        result_Dialog->setWindowTitle(QApplication::translate("result_Dialog", "Dialog", 0));
        quit_pushButton->setText(QApplication::translate("result_Dialog", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class result_Dialog: public Ui_result_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
