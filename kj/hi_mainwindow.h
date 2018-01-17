/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef H_MAINWINDOW_H
#define H_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *all_tab;
    QWidget *zdqy_tab;
    QWidget *zbyxl_tab;
    QWidget *ytfy_tab;
    QWidget *hnwrq_tab;
    QWidget *rwhx_tab;
    QWidget *jqzcl_tab;
    QWidget *tz_tab;
    QProgressBar *index_progressBar;
    QTextEdit *explain_textEdit;
    QLineEdit *year_lineEdit;
    QGraphicsView *graphicsView;
    QPushButton *dataDump_pushButton;
    QPushButton *quit_pushButton;
    QPushButton *oneResult_pushButton;
    QLabel *label_4;
    QComboBox *quarter_comboBox;
    QComboBox *year_comboBox;
    QLabel *label_3;
    QTableView *all_tableView;
    QTextEdit *allThree_textEdit;
    QPushButton *capture_pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *index_lineEdit;
    QLineEdit *one_lineEdit;
    QLineEdit *two_lineEdit;
    QLineEdit *three_lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1024, 768));
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::Triangular);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 90, 931, 41));
        tabWidget->setMinimumSize(QSize(0, 41));
        tabWidget->setMaximumSize(QSize(5000, 41));
        tabWidget->setStyleSheet(QLatin1String(" QTabWidget::pane { /* The tab widget frame */\n"
"     border-top: 2px solid #C2C7CB;\n"
"     position: absolute;\n"
"     top: -0.5em;\n"
" }\n"
"\n"
" QTabWidget::tab-bar {\n"
"     alignment: center;\n"
" }\n"
"\n"
" /* Style the tab using the tab sub-control. Note that\n"
"     it reads QTabBar _not_ QTabWidget */\n"
" QTabBar::tab {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"     border: 2px solid #C4C4C3;\n"
"     border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"     border-top-left-radius: 4px;\n"
"     border-top-right-radius: 4px;\n"
"     min-width: 8ex;\n"
"     padding: 2px;\n"
" }\n"
"\n"
" QTabBar::tab:selected, QTabBar::tab:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                 stop"
                        ": 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
" }\n"
"\n"
" QTabBar::tab:selected {\n"
"     border-color: #9B9B9B;\n"
"     border-bottom-color: #C2C7CB; /* same as pane color */\n"
" }"));
        tabWidget->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        all_tab = new QWidget();
        all_tab->setObjectName(QStringLiteral("all_tab"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qrc/image/qrc/image/ZZzczs.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(all_tab, icon, QString());
        zdqy_tab = new QWidget();
        zdqy_tab->setObjectName(QStringLiteral("zdqy_tab"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qrc/image/qrc/image/ZZzdqy.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(zdqy_tab, icon1, QString());
        zbyxl_tab = new QWidget();
        zbyxl_tab->setObjectName(QStringLiteral("zbyxl_tab"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/qrc/image/qrc/image/ZZ_gnwrq.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(zbyxl_tab, icon2, QString());
        ytfy_tab = new QWidget();
        ytfy_tab->setObjectName(QStringLiteral("ytfy_tab"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/qrc/image/qrc/image/ZZytfy.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(ytfy_tab, icon3, QString());
        hnwrq_tab = new QWidget();
        hnwrq_tab->setObjectName(QStringLiteral("hnwrq_tab"));
        tabWidget->addTab(hnwrq_tab, icon2, QString());
        rwhx_tab = new QWidget();
        rwhx_tab->setObjectName(QStringLiteral("rwhx_tab"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/qrc/image/qrc/image/ZZ_rwzs.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(rwhx_tab, icon4, QString());
        jqzcl_tab = new QWidget();
        jqzcl_tab->setObjectName(QStringLiteral("jqzcl_tab"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/qrc/image/qrc/image/ZZjqzcl.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(jqzcl_tab, icon5, QString());
        tz_tab = new QWidget();
        tz_tab->setObjectName(QStringLiteral("tz_tab"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/qrc/image/qrc/image/ZZ.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tz_tab, icon6, QString());
        index_progressBar = new QProgressBar(centralWidget);
        index_progressBar->setObjectName(QStringLiteral("index_progressBar"));
        index_progressBar->setGeometry(QRect(740, 430, 12, 163));
        index_progressBar->setMinimumSize(QSize(0, 100));
        index_progressBar->setMaximumSize(QSize(16, 250));
        index_progressBar->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"	background-color: rgb(255, 0, 0);\n"
"\n"
"}"));
        index_progressBar->setValue(20);
        index_progressBar->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        index_progressBar->setTextVisible(false);
        index_progressBar->setOrientation(Qt::Vertical);
        index_progressBar->setInvertedAppearance(false);
        index_progressBar->setTextDirection(QProgressBar::TopToBottom);
        explain_textEdit = new QTextEdit(centralWidget);
        explain_textEdit->setObjectName(QStringLiteral("explain_textEdit"));
        explain_textEdit->setGeometry(QRect(840, 390, 141, 191));
        explain_textEdit->setMinimumSize(QSize(141, 161));
        explain_textEdit->setMaximumSize(QSize(161, 300));
        year_lineEdit = new QLineEdit(centralWidget);
        year_lineEdit->setObjectName(QStringLiteral("year_lineEdit"));
        year_lineEdit->setGeometry(QRect(691, 171, 113, 22));
        year_lineEdit->setMinimumSize(QSize(113, 22));
        year_lineEdit->setMaximumSize(QSize(113, 22));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(700, 340, 101, 321));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/qrc/image/qrc/image/temperature.png);"));
        dataDump_pushButton = new QPushButton(centralWidget);
        dataDump_pushButton->setObjectName(QStringLiteral("dataDump_pushButton"));
        dataDump_pushButton->setGeometry(QRect(429, 713, 160, 15));
        dataDump_pushButton->setMinimumSize(QSize(160, 15));
        dataDump_pushButton->setMaximumSize(QSize(125, 14));
        dataDump_pushButton->setStyleSheet(QLatin1String("background-color: rgb(102, 204, 255);\n"
"subcontrol-position: center;\n"
"subcontrol-origin: padding;\n"
"border-radius: 5px;"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/qrc/image/qrc/image/print_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        dataDump_pushButton->setIcon(icon7);
        dataDump_pushButton->setCheckable(true);
        quit_pushButton = new QPushButton(centralWidget);
        quit_pushButton->setObjectName(QStringLiteral("quit_pushButton"));
        quit_pushButton->setGeometry(QRect(626, 714, 160, 15));
        quit_pushButton->setMinimumSize(QSize(160, 15));
        quit_pushButton->setMaximumSize(QSize(158, 13));
        quit_pushButton->setStyleSheet(QLatin1String("background-color: rgb(102, 204, 255);\n"
"subcontrol-position: center;\n"
"subcontrol-origin: padding;\n"
"border-radius: 5px;"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/qrc/image/qrc/image/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        quit_pushButton->setIcon(icon8);
        oneResult_pushButton = new QPushButton(centralWidget);
        oneResult_pushButton->setObjectName(QStringLiteral("oneResult_pushButton"));
        oneResult_pushButton->setGeometry(QRect(232, 713, 160, 15));
        oneResult_pushButton->setMinimumSize(QSize(160, 15));
        oneResult_pushButton->setMaximumSize(QSize(125, 14));
        oneResult_pushButton->setStyleSheet(QLatin1String("background-color: rgb(102, 204, 255);\n"
"subcontrol-position: center;\n"
"subcontrol-origin: padding;\n"
"border-radius: 5px;"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/qrc/image/qrc/image/compute_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        oneResult_pushButton->setIcon(icon9);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(420, 32, 101, 39));
        label_4->setMinimumSize(QSize(101, 39));
        label_4->setMaximumSize(QSize(101, 39));
        quarter_comboBox = new QComboBox(centralWidget);
        quarter_comboBox->setObjectName(QStringLiteral("quarter_comboBox"));
        quarter_comboBox->setGeometry(QRect(312, 40, 102, 22));
        quarter_comboBox->setMinimumSize(QSize(102, 22));
        quarter_comboBox->setMaximumSize(QSize(102, 22));
        quarter_comboBox->setEditable(false);
        year_comboBox = new QComboBox(centralWidget);
        year_comboBox->setObjectName(QStringLiteral("year_comboBox"));
        year_comboBox->setGeometry(QRect(72, 40, 97, 22));
        year_comboBox->setMinimumSize(QSize(97, 22));
        year_comboBox->setMaximumSize(QSize(97, 22));
        year_comboBox->setStyleSheet(QStringLiteral(""));
        year_comboBox->setEditable(false);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(175, 32, 96, 39));
        label_3->setMinimumSize(QSize(96, 39));
        label_3->setMaximumSize(QSize(96, 39));
        all_tableView = new QTableView(centralWidget);
        all_tableView->setObjectName(QStringLiteral("all_tableView"));
        all_tableView->setGeometry(QRect(30, 130, 641, 531));
        allThree_textEdit = new QTextEdit(centralWidget);
        allThree_textEdit->setObjectName(QStringLiteral("allThree_textEdit"));
        allThree_textEdit->setGeometry(QRect(690, 220, 111, 51));
        capture_pushButton = new QPushButton(centralWidget);
        capture_pushButton->setObjectName(QStringLiteral("capture_pushButton"));
        capture_pushButton->setGeometry(QRect(850, 630, 82, 26));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(840, 150, 146, 201));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        index_lineEdit = new QLineEdit(layoutWidget);
        index_lineEdit->setObjectName(QStringLiteral("index_lineEdit"));
        index_lineEdit->setMinimumSize(QSize(0, 0));
        index_lineEdit->setMaximumSize(QSize(211, 22));

        gridLayout->addWidget(index_lineEdit, 0, 0, 1, 1);

        one_lineEdit = new QLineEdit(layoutWidget);
        one_lineEdit->setObjectName(QStringLiteral("one_lineEdit"));

        gridLayout->addWidget(one_lineEdit, 1, 0, 1, 1);

        two_lineEdit = new QLineEdit(layoutWidget);
        two_lineEdit->setObjectName(QStringLiteral("two_lineEdit"));

        gridLayout->addWidget(two_lineEdit, 2, 0, 1, 1);

        three_lineEdit = new QLineEdit(layoutWidget);
        three_lineEdit->setObjectName(QStringLiteral("three_lineEdit"));

        gridLayout->addWidget(three_lineEdit, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        dataDump_pushButton->raise();
        quit_pushButton->raise();
        oneResult_pushButton->raise();
        label_4->raise();
        quarter_comboBox->raise();
        year_comboBox->raise();
        label_3->raise();
        graphicsView->raise();
        tabWidget->raise();
        explain_textEdit->raise();
        year_lineEdit->raise();
        index_progressBar->raise();
        all_tableView->raise();
        allThree_textEdit->raise();
        capture_pushButton->raise();
        QWidget::setTabOrder(year_comboBox, quarter_comboBox);
        QWidget::setTabOrder(quarter_comboBox, tabWidget);
        QWidget::setTabOrder(tabWidget, oneResult_pushButton);
        QWidget::setTabOrder(oneResult_pushButton, dataDump_pushButton);
        QWidget::setTabOrder(dataDump_pushButton, quit_pushButton);
        QWidget::setTabOrder(quit_pushButton, year_lineEdit);
        QWidget::setTabOrder(year_lineEdit, index_lineEdit);
        QWidget::setTabOrder(index_lineEdit, explain_textEdit);
        QWidget::setTabOrder(explain_textEdit, graphicsView);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\274\200\346\231\257\346\214\207\346\225\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(all_tab), QApplication::translate("MainWindow", "\346\200\273\346\210\220\346\214\207\346\225\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(zdqy_tab), QApplication::translate("MainWindow", "\344\270\273\345\257\274\344\274\201\344\270\232\350\277\220\350\220\245\346\214\207\346\225\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(zbyxl_tab), QApplication::translate("MainWindow", "\345\221\250\350\276\271\345\275\261\345\223\215\345\212\233\346\214\207\346\225\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(ytfy_tab), QApplication::translate("MainWindow", "\344\270\232\346\200\201\344\270\260\350\243\225\346\214\207\346\225\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(hnwrq_tab), QApplication::translate("MainWindow", "\346\265\267\345\206\205\345\244\226\344\272\272\346\260\224", 0));
        tabWidget->setTabText(tabWidget->indexOf(rwhx_tab), QApplication::translate("MainWindow", "\344\272\272\346\226\207\345\222\214\350\260\220", 0));
        tabWidget->setTabText(tabWidget->indexOf(jqzcl_tab), QApplication::translate("MainWindow", "\346\231\257\345\214\272\346\224\257\346\222\221\345\212\233", 0));
        tabWidget->setTabText(tabWidget->indexOf(tz_tab), QApplication::translate("MainWindow", "\350\260\203\346\225\264\346\214\207\346\225\260", 0));
        index_progressBar->setFormat(QApplication::translate("MainWindow", "%p%", 0));
        explain_textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">explain</span></p></body></html>", 0));
        year_lineEdit->setText(QApplication::translate("MainWindow", "year, quarter", 0));
        dataDump_pushButton->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\350\256\241\347\256\227\346\214\207\346\240\207", 0));
        quit_pushButton->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        oneResult_pushButton->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227\345\205\250\351\203\250\346\214\207\346\240\207", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\255\243\345\272\246", 0));
        quarter_comboBox->clear();
        quarter_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\205\250\351\203\250", 0)
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
        );
        year_comboBox->clear();
        year_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\205\250\351\203\250", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "\345\271\264", 0));
        allThree_textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\275\261\345\223\215\346\234\200\345\244\247\347\232\204</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\270\211\344\270\252\346\214\207\346\240\207:</p></body></html>", 0));
        capture_pushButton->setText(QApplication::translate("MainWindow", "\346\210\252\345\261\217", 0));
        index_lineEdit->setText(QApplication::translate("MainWindow", "index", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // H_MAINWINDOW_H
