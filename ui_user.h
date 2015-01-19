/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_user_Dialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *modify_pushButton;
    QPushButton *del_pushButton;
    QPushButton *new_pushButton;
    QPushButton *quit_pushButton;
    QGridLayout *gridLayout;
    QLineEdit *oldPassword_lineEdit;
    QLineEdit *userName_lineEdit;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *newPasswordAgain_lineEdit;
    QLineEdit *hints_lineEdit;
    QLabel *label_5;
    QLineEdit *newPassword_lineEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QTreeView *user_treeView;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *user_Dialog)
    {
        if (user_Dialog->objectName().isEmpty())
            user_Dialog->setObjectName(QStringLiteral("user_Dialog"));
        user_Dialog->resize(600, 450);
        gridLayout_3 = new QGridLayout(user_Dialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        modify_pushButton = new QPushButton(user_Dialog);
        modify_pushButton->setObjectName(QStringLiteral("modify_pushButton"));
        modify_pushButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qrc/image/qrc/image/modify_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        modify_pushButton->setIcon(icon);

        gridLayout_2->addWidget(modify_pushButton, 0, 0, 1, 1);

        del_pushButton = new QPushButton(user_Dialog);
        del_pushButton->setObjectName(QStringLiteral("del_pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qrc/image/qrc/image/delete_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        del_pushButton->setIcon(icon1);

        gridLayout_2->addWidget(del_pushButton, 1, 0, 1, 1);

        new_pushButton = new QPushButton(user_Dialog);
        new_pushButton->setObjectName(QStringLiteral("new_pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/qrc/image/qrc/image/insert_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        new_pushButton->setIcon(icon2);

        gridLayout_2->addWidget(new_pushButton, 0, 1, 1, 1);

        quit_pushButton = new QPushButton(user_Dialog);
        quit_pushButton->setObjectName(QStringLiteral("quit_pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/qrc/image/qrc/image/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        quit_pushButton->setIcon(icon3);

        gridLayout_2->addWidget(quit_pushButton, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        oldPassword_lineEdit = new QLineEdit(user_Dialog);
        oldPassword_lineEdit->setObjectName(QStringLiteral("oldPassword_lineEdit"));

        gridLayout->addWidget(oldPassword_lineEdit, 2, 1, 1, 1);

        userName_lineEdit = new QLineEdit(user_Dialog);
        userName_lineEdit->setObjectName(QStringLiteral("userName_lineEdit"));

        gridLayout->addWidget(userName_lineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(user_Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(user_Dialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        label_2 = new QLabel(user_Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        newPasswordAgain_lineEdit = new QLineEdit(user_Dialog);
        newPasswordAgain_lineEdit->setObjectName(QStringLiteral("newPasswordAgain_lineEdit"));

        gridLayout->addWidget(newPasswordAgain_lineEdit, 4, 1, 1, 1);

        hints_lineEdit = new QLineEdit(user_Dialog);
        hints_lineEdit->setObjectName(QStringLiteral("hints_lineEdit"));

        gridLayout->addWidget(hints_lineEdit, 5, 1, 1, 1);

        label_5 = new QLabel(user_Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        newPassword_lineEdit = new QLineEdit(user_Dialog);
        newPassword_lineEdit->setObjectName(QStringLiteral("newPassword_lineEdit"));

        gridLayout->addWidget(newPassword_lineEdit, 3, 1, 1, 1);

        label_3 = new QLabel(user_Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);

        user_treeView = new QTreeView(user_Dialog);
        user_treeView->setObjectName(QStringLiteral("user_treeView"));

        gridLayout_3->addWidget(user_treeView, 0, 0, 3, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 1, 1, 1, 1);

        QWidget::setTabOrder(userName_lineEdit, oldPassword_lineEdit);
        QWidget::setTabOrder(oldPassword_lineEdit, newPassword_lineEdit);
        QWidget::setTabOrder(newPassword_lineEdit, newPasswordAgain_lineEdit);
        QWidget::setTabOrder(newPasswordAgain_lineEdit, hints_lineEdit);
        QWidget::setTabOrder(hints_lineEdit, modify_pushButton);
        QWidget::setTabOrder(modify_pushButton, new_pushButton);
        QWidget::setTabOrder(new_pushButton, del_pushButton);
        QWidget::setTabOrder(del_pushButton, quit_pushButton);
        QWidget::setTabOrder(quit_pushButton, user_treeView);

        retranslateUi(user_Dialog);

        QMetaObject::connectSlotsByName(user_Dialog);
    } // setupUi

    void retranslateUi(QDialog *user_Dialog)
    {
        user_Dialog->setWindowTitle(QApplication::translate("user_Dialog", "\347\224\250\346\210\267\345\257\206\347\240\201\344\277\256\346\224\271", 0));
        modify_pushButton->setText(QApplication::translate("user_Dialog", "\344\277\256\346\224\271", 0));
        del_pushButton->setText(QApplication::translate("user_Dialog", "\345\210\240\351\231\244", 0));
        new_pushButton->setText(QApplication::translate("user_Dialog", "\346\226\260\345\273\272", 0));
        quit_pushButton->setText(QApplication::translate("user_Dialog", "\351\200\200\345\207\272", 0));
        label_4->setText(QApplication::translate("user_Dialog", "<html><head/><body><p>\346\226\260\345\257\206\347\240\201</p></body></html>", 0));
        label->setText(QApplication::translate("user_Dialog", "<html><head/><body><p>\346\217\220\347\244\272</p></body></html>", 0));
        label_2->setText(QApplication::translate("user_Dialog", "<html><head/><body><p>\347\224\250\346\210\267\345\220\215</p></body></html>", 0));
        label_5->setText(QApplication::translate("user_Dialog", "<html><head/><body><p>\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201</p></body></html>", 0));
        label_3->setText(QApplication::translate("user_Dialog", "<html><head/><body><p>\346\227\247\345\257\206\347\240\201</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class user_Dialog: public Ui_user_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
