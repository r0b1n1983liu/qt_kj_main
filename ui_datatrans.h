/********************************************************************************
** Form generated from reading UI file 'datatrans.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATATRANS_H
#define UI_DATATRANS_H

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
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DataTrans
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *quarter_lineEdit;
    QLabel *quarter_label;
    QLabel *year_label;
    QLineEdit *year_lineEdit;
    QLineEdit *code3Value_lineEdit;
    QLineEdit *code3_lineEdit;
    QLabel *codex_label;
    QLabel *codeValue_label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QPushButton *importExcel_pushButton;
    QPushButton *delAll_pushButton;
    QPushButton *modify_pushButton;
    QPushButton *exportExcel_pushButton;
    QPushButton *delete_pushButton;
    QPushButton *quit_pushButton;
    QPushButton *clear_pushButton;
    QPushButton *search_pushButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QTableView *data_tableView;

    void setupUi(QDialog *DataTrans)
    {
        if (DataTrans->objectName().isEmpty())
            DataTrans->setObjectName(QStringLiteral("DataTrans"));
        DataTrans->resize(879, 642);
        gridLayout_3 = new QGridLayout(DataTrans);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        quarter_lineEdit = new QLineEdit(DataTrans);
        quarter_lineEdit->setObjectName(QStringLiteral("quarter_lineEdit"));

        gridLayout->addWidget(quarter_lineEdit, 2, 3, 1, 1);

        quarter_label = new QLabel(DataTrans);
        quarter_label->setObjectName(QStringLiteral("quarter_label"));

        gridLayout->addWidget(quarter_label, 2, 1, 1, 1);

        year_label = new QLabel(DataTrans);
        year_label->setObjectName(QStringLiteral("year_label"));

        gridLayout->addWidget(year_label, 0, 1, 1, 1);

        year_lineEdit = new QLineEdit(DataTrans);
        year_lineEdit->setObjectName(QStringLiteral("year_lineEdit"));

        gridLayout->addWidget(year_lineEdit, 0, 3, 1, 1);

        code3Value_lineEdit = new QLineEdit(DataTrans);
        code3Value_lineEdit->setObjectName(QStringLiteral("code3Value_lineEdit"));

        gridLayout->addWidget(code3Value_lineEdit, 5, 3, 1, 1);

        code3_lineEdit = new QLineEdit(DataTrans);
        code3_lineEdit->setObjectName(QStringLiteral("code3_lineEdit"));

        gridLayout->addWidget(code3_lineEdit, 3, 3, 1, 1);

        codex_label = new QLabel(DataTrans);
        codex_label->setObjectName(QStringLiteral("codex_label"));

        gridLayout->addWidget(codex_label, 3, 1, 1, 1);

        codeValue_label = new QLabel(DataTrans);
        codeValue_label->setObjectName(QStringLiteral("codeValue_label"));

        gridLayout->addWidget(codeValue_label, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 6, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        importExcel_pushButton = new QPushButton(DataTrans);
        importExcel_pushButton->setObjectName(QStringLiteral("importExcel_pushButton"));
        importExcel_pushButton->setMinimumSize(QSize(80, 40));
        importExcel_pushButton->setMaximumSize(QSize(80, 33));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qrc/image/qrc/image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        importExcel_pushButton->setIcon(icon);

        gridLayout_2->addWidget(importExcel_pushButton, 0, 2, 1, 1);

        delAll_pushButton = new QPushButton(DataTrans);
        delAll_pushButton->setObjectName(QStringLiteral("delAll_pushButton"));
        delAll_pushButton->setMinimumSize(QSize(80, 33));
        delAll_pushButton->setMaximumSize(QSize(80, 33));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qrc/image/qrc/image/delete_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        delAll_pushButton->setIcon(icon1);

        gridLayout_2->addWidget(delAll_pushButton, 1, 2, 1, 1);

        modify_pushButton = new QPushButton(DataTrans);
        modify_pushButton->setObjectName(QStringLiteral("modify_pushButton"));
        modify_pushButton->setMaximumSize(QSize(80, 33));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/qrc/image/qrc/image/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        modify_pushButton->setIcon(icon2);

        gridLayout_2->addWidget(modify_pushButton, 1, 0, 1, 1);

        exportExcel_pushButton = new QPushButton(DataTrans);
        exportExcel_pushButton->setObjectName(QStringLiteral("exportExcel_pushButton"));
        exportExcel_pushButton->setMinimumSize(QSize(80, 40));
        exportExcel_pushButton->setMaximumSize(QSize(80, 33));
        exportExcel_pushButton->setIcon(icon);

        gridLayout_2->addWidget(exportExcel_pushButton, 0, 3, 1, 1);

        delete_pushButton = new QPushButton(DataTrans);
        delete_pushButton->setObjectName(QStringLiteral("delete_pushButton"));
        delete_pushButton->setMaximumSize(QSize(80, 33));
        delete_pushButton->setIcon(icon1);

        gridLayout_2->addWidget(delete_pushButton, 1, 1, 1, 1);

        quit_pushButton = new QPushButton(DataTrans);
        quit_pushButton->setObjectName(QStringLiteral("quit_pushButton"));
        quit_pushButton->setMaximumSize(QSize(80, 33));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/qrc/image/qrc/image/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        quit_pushButton->setIcon(icon3);

        gridLayout_2->addWidget(quit_pushButton, 1, 3, 1, 1);

        clear_pushButton = new QPushButton(DataTrans);
        clear_pushButton->setObjectName(QStringLiteral("clear_pushButton"));
        clear_pushButton->setMaximumSize(QSize(80, 33));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/qrc/image/qrc/image/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear_pushButton->setIcon(icon4);

        gridLayout_2->addWidget(clear_pushButton, 0, 1, 1, 1);

        search_pushButton = new QPushButton(DataTrans);
        search_pushButton->setObjectName(QStringLiteral("search_pushButton"));
        search_pushButton->setMaximumSize(QSize(80, 33));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/qrc/image/qrc/image/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_pushButton->setIcon(icon5);

        gridLayout_2->addWidget(search_pushButton, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 300, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 2, 1, 1);

        data_tableView = new QTableView(DataTrans);
        data_tableView->setObjectName(QStringLiteral("data_tableView"));

        gridLayout_3->addWidget(data_tableView, 0, 1, 3, 1);

        QWidget::setTabOrder(year_lineEdit, quarter_lineEdit);
        QWidget::setTabOrder(quarter_lineEdit, code3_lineEdit);
        QWidget::setTabOrder(code3_lineEdit, code3Value_lineEdit);
        QWidget::setTabOrder(code3Value_lineEdit, search_pushButton);
        QWidget::setTabOrder(search_pushButton, clear_pushButton);
        QWidget::setTabOrder(clear_pushButton, delAll_pushButton);
        QWidget::setTabOrder(delAll_pushButton, delete_pushButton);
        QWidget::setTabOrder(delete_pushButton, modify_pushButton);
        QWidget::setTabOrder(modify_pushButton, importExcel_pushButton);
        QWidget::setTabOrder(importExcel_pushButton, exportExcel_pushButton);
        QWidget::setTabOrder(exportExcel_pushButton, quit_pushButton);
        QWidget::setTabOrder(quit_pushButton, data_tableView);

        retranslateUi(DataTrans);

        QMetaObject::connectSlotsByName(DataTrans);
    } // setupUi

    void retranslateUi(QDialog *DataTrans)
    {
        DataTrans->setWindowTitle(QApplication::translate("DataTrans", "\346\225\260\346\215\256\347\256\241\347\220\206", 0));
        quarter_label->setText(QApplication::translate("DataTrans", "\345\255\243\345\272\246", 0));
        year_label->setText(QApplication::translate("DataTrans", "\345\271\264\344\273\275", 0));
        codex_label->setText(QApplication::translate("DataTrans", "\346\214\207\346\240\207", 0));
        codeValue_label->setText(QApplication::translate("DataTrans", "\346\214\207\346\240\207\345\200\274", 0));
        importExcel_pushButton->setText(QApplication::translate("DataTrans", "\345\257\274\345\205\245\n"
"Excel07", 0));
        delAll_pushButton->setText(QApplication::translate("DataTrans", "\345\210\240\351\231\244\345\205\250\351\203\250", 0));
        modify_pushButton->setText(QApplication::translate("DataTrans", "\344\277\256\346\224\271", 0));
        exportExcel_pushButton->setText(QApplication::translate("DataTrans", "\345\257\274\345\207\272\344\270\272\n"
"Excel07", 0));
        delete_pushButton->setText(QApplication::translate("DataTrans", "\345\210\240\351\231\244", 0));
        quit_pushButton->setText(QApplication::translate("DataTrans", "\351\200\200\345\207\272", 0));
        clear_pushButton->setText(QApplication::translate("DataTrans", "\346\270\205\347\251\272", 0));
        search_pushButton->setText(QApplication::translate("DataTrans", "\346\237\245\346\211\276", 0));
    } // retranslateUi

};

namespace Ui {
    class DataTrans: public Ui_DataTrans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATATRANS_H
