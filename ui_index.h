/********************************************************************************
** Form generated from reading UI file 'index.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_H
#define UI_INDEX_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_index_Dialog
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *modify_pushButton;
    QPushButton *quit_pushButton;
    QPushButton *import_pushButton;
    QPushButton *export_pushButton;
    QPushButton *delAll_pushButton;
    QGridLayout *gridLayout_3;
    QPushButton *search_pushButton;
    QPushButton *clear_pushButton;
    QGridLayout *gridLayout;
    QLineEdit *code2_lineEdit;
    QLineEdit *code3_lineEdit;
    QLabel *name_label;
    QLabel *code3_label;
    QLineEdit *name_lineEdit;
    QLabel *code2_label;
    QSpacerItem *horizontalSpacer_4;
    QTextEdit *info_textEdit;
    QLabel *info_label;
    QTreeView *index_treeView;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *index_Dialog)
    {
        if (index_Dialog->objectName().isEmpty())
            index_Dialog->setObjectName(QStringLiteral("index_Dialog"));
        index_Dialog->resize(800, 600);
        gridLayout_4 = new QGridLayout(index_Dialog);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        modify_pushButton = new QPushButton(index_Dialog);
        modify_pushButton->setObjectName(QStringLiteral("modify_pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qrc/image/qrc/image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        modify_pushButton->setIcon(icon);

        gridLayout_2->addWidget(modify_pushButton, 0, 1, 1, 1);

        quit_pushButton = new QPushButton(index_Dialog);
        quit_pushButton->setObjectName(QStringLiteral("quit_pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qrc/image/qrc/image/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        quit_pushButton->setIcon(icon1);

        gridLayout_2->addWidget(quit_pushButton, 0, 5, 1, 1);

        import_pushButton = new QPushButton(index_Dialog);
        import_pushButton->setObjectName(QStringLiteral("import_pushButton"));
        import_pushButton->setIcon(icon);

        gridLayout_2->addWidget(import_pushButton, 0, 2, 1, 1);

        export_pushButton = new QPushButton(index_Dialog);
        export_pushButton->setObjectName(QStringLiteral("export_pushButton"));
        export_pushButton->setIcon(icon);

        gridLayout_2->addWidget(export_pushButton, 0, 3, 1, 1);

        delAll_pushButton = new QPushButton(index_Dialog);
        delAll_pushButton->setObjectName(QStringLiteral("delAll_pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/qrc/image/qrc/image/delete_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        delAll_pushButton->setIcon(icon2);

        gridLayout_2->addWidget(delAll_pushButton, 0, 4, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 4, 1, 1, 3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        search_pushButton = new QPushButton(index_Dialog);
        search_pushButton->setObjectName(QStringLiteral("search_pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/qrc/image/qrc/image/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_pushButton->setIcon(icon3);

        gridLayout_3->addWidget(search_pushButton, 0, 0, 1, 1);

        clear_pushButton = new QPushButton(index_Dialog);
        clear_pushButton->setObjectName(QStringLiteral("clear_pushButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/qrc/image/qrc/image/data_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear_pushButton->setIcon(icon4);

        gridLayout_3->addWidget(clear_pushButton, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        code2_lineEdit = new QLineEdit(index_Dialog);
        code2_lineEdit->setObjectName(QStringLiteral("code2_lineEdit"));

        gridLayout->addWidget(code2_lineEdit, 2, 1, 1, 1);

        code3_lineEdit = new QLineEdit(index_Dialog);
        code3_lineEdit->setObjectName(QStringLiteral("code3_lineEdit"));

        gridLayout->addWidget(code3_lineEdit, 1, 1, 1, 1);

        name_label = new QLabel(index_Dialog);
        name_label->setObjectName(QStringLiteral("name_label"));

        gridLayout->addWidget(name_label, 0, 0, 1, 1);

        code3_label = new QLabel(index_Dialog);
        code3_label->setObjectName(QStringLiteral("code3_label"));

        gridLayout->addWidget(code3_label, 1, 0, 1, 1);

        name_lineEdit = new QLineEdit(index_Dialog);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));

        gridLayout->addWidget(name_lineEdit, 0, 1, 1, 1);

        code2_label = new QLabel(index_Dialog);
        code2_label->setObjectName(QStringLiteral("code2_label"));

        gridLayout->addWidget(code2_label, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 3, 1, 1);

        info_textEdit = new QTextEdit(index_Dialog);
        info_textEdit->setObjectName(QStringLiteral("info_textEdit"));
        info_textEdit->setMaximumSize(QSize(300, 400));

        gridLayout_4->addWidget(info_textEdit, 2, 3, 1, 1);

        info_label = new QLabel(index_Dialog);
        info_label->setObjectName(QStringLiteral("info_label"));

        gridLayout_4->addWidget(info_label, 1, 3, 1, 1);

        index_treeView = new QTreeView(index_Dialog);
        index_treeView->setObjectName(QStringLiteral("index_treeView"));

        gridLayout_4->addWidget(index_treeView, 0, 1, 4, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        QWidget::setTabOrder(name_lineEdit, code3_lineEdit);
        QWidget::setTabOrder(code3_lineEdit, code2_lineEdit);
        QWidget::setTabOrder(code2_lineEdit, info_textEdit);
        QWidget::setTabOrder(info_textEdit, modify_pushButton);
        QWidget::setTabOrder(modify_pushButton, quit_pushButton);
        QWidget::setTabOrder(quit_pushButton, index_treeView);

        retranslateUi(index_Dialog);

        QMetaObject::connectSlotsByName(index_Dialog);
    } // setupUi

    void retranslateUi(QDialog *index_Dialog)
    {
        index_Dialog->setWindowTitle(QApplication::translate("index_Dialog", "\346\214\207\346\240\207\347\256\241\347\220\206", 0));
        modify_pushButton->setText(QApplication::translate("index_Dialog", "\344\277\256\346\224\271", 0));
        quit_pushButton->setText(QApplication::translate("index_Dialog", "\351\200\200\345\207\272", 0));
        import_pushButton->setText(QApplication::translate("index_Dialog", "\345\257\274\345\205\245Excel07", 0));
        export_pushButton->setText(QApplication::translate("index_Dialog", "\345\257\274\345\207\272Excel07", 0));
        delAll_pushButton->setText(QApplication::translate("index_Dialog", "\345\205\250\351\203\250\345\210\240\351\231\244", 0));
        search_pushButton->setText(QApplication::translate("index_Dialog", "\346\237\245\350\257\242", 0));
        clear_pushButton->setText(QApplication::translate("index_Dialog", "\346\270\205\347\251\272", 0));
        name_label->setText(QApplication::translate("index_Dialog", "\346\214\207\346\240\207\345\220\215\347\247\260", 0));
        code3_label->setText(QApplication::translate("index_Dialog", "\346\214\207\346\240\207\347\274\226\345\217\267", 0));
        code2_label->setText(QApplication::translate("index_Dialog", "\344\272\214\347\272\247\347\274\226\345\217\267", 0));
        info_label->setText(QApplication::translate("index_Dialog", "\350\257\264\346\230\216:", 0));
    } // retranslateUi

};

namespace Ui {
    class index_Dialog: public Ui_index_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_H
