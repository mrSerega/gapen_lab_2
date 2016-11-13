/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *gvG;
    QPushButton *btnBig;
    QLabel *lbEps;
    QSpinBox *sbEps;
    QTextBrowser *tbX;
    QTextBrowser *tbY;
    QTextBrowser *tbZ;
    QTextEdit *tePower;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(547, 379);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gvG = new QGraphicsView(centralWidget);
        gvG->setObjectName(QStringLiteral("gvG"));
        gvG->setGeometry(QRect(10, 10, 411, 311));
        btnBig = new QPushButton(centralWidget);
        btnBig->setObjectName(QStringLiteral("btnBig"));
        btnBig->setGeometry(QRect(430, 100, 80, 60));
        lbEps = new QLabel(centralWidget);
        lbEps->setObjectName(QStringLiteral("lbEps"));
        lbEps->setGeometry(QRect(430, 160, 80, 15));
        sbEps = new QSpinBox(centralWidget);
        sbEps->setObjectName(QStringLiteral("sbEps"));
        sbEps->setGeometry(QRect(430, 180, 80, 25));
        sbEps->setMinimum(-5);
        sbEps->setMaximum(0);
        sbEps->setValue(-5);
        tbX = new QTextBrowser(centralWidget);
        tbX->setObjectName(QStringLiteral("tbX"));
        tbX->setGeometry(QRect(449, 10, 81, 25));
        tbY = new QTextBrowser(centralWidget);
        tbY->setObjectName(QStringLiteral("tbY"));
        tbY->setGeometry(QRect(449, 40, 81, 25));
        tbZ = new QTextBrowser(centralWidget);
        tbZ->setObjectName(QStringLiteral("tbZ"));
        tbZ->setGeometry(QRect(449, 70, 81, 25));
        tePower = new QTextEdit(centralWidget);
        tePower->setObjectName(QStringLiteral("tePower"));
        tePower->setGeometry(QRect(489, 210, 41, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 10, 25, 25));
        label->setLineWidth(1);
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(430, 40, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 70, 47, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(440, 250, 81, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(440, 270, 47, 13));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(440, 290, 47, 13));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 220, 47, 13));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 547, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btnBig->setText(QApplication::translate("MainWindow", "BIG BUTTON", 0));
        lbEps->setText(QApplication::translate("MainWindow", "eps = 1e", 0));
        tePower->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">100</p></body></html>", 0));
        label->setText(QApplication::translate("MainWindow", "x", 0));
        label_2->setText(QApplication::translate("MainWindow", "y", 0));
        label_3->setText(QApplication::translate("MainWindow", "z", 0));
        label_4->setText(QApplication::translate("MainWindow", "x/y - green", 0));
        label_5->setText(QApplication::translate("MainWindow", "y/z - red", 0));
        label_6->setText(QApplication::translate("MainWindow", "x/z - blue", 0));
        label_7->setText(QApplication::translate("MainWindow", "power", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
