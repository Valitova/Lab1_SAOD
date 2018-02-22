/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 8. Feb 06:47:44 2018
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QRadioButton *radioBubble;
    QRadioButton *radioBinary;
    QRadioButton *radioShell;
    QRadioButton *radioPyramid;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QLabel *label_3;
    QTextBrowser *textInput;
    QTextBrowser *textOutput;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushDone;
    QPushButton *pushLoad;
    QTextBrowser *textTime;
    QTextBrowser *textRearrange;
    QTextBrowser *textCompare;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(715, 534);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        radioBubble = new QRadioButton(centralWidget);
        radioBubble->setObjectName(QString::fromUtf8("radioBubble"));
        radioBubble->setGeometry(QRect(20, 50, 82, 18));
        radioBinary = new QRadioButton(centralWidget);
        radioBinary->setObjectName(QString::fromUtf8("radioBinary"));
        radioBinary->setGeometry(QRect(20, 80, 82, 18));
        radioShell = new QRadioButton(centralWidget);
        radioShell->setObjectName(QString::fromUtf8("radioShell"));
        radioShell->setGeometry(QRect(20, 110, 82, 18));
        radioPyramid = new QRadioButton(centralWidget);
        radioPyramid->setObjectName(QString::fromUtf8("radioPyramid"));
        radioPyramid->setGeometry(QRect(20, 140, 101, 18));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 91, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 180, 91, 16));
        label_2->setFont(font);
        checkBox_1 = new QCheckBox(centralWidget);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(20, 210, 71, 18));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 240, 71, 18));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 280, 91, 16));
        label_3->setFont(font);
        textInput = new QTextBrowser(centralWidget);
        textInput->setObjectName(QString::fromUtf8("textInput"));
        textInput->setGeometry(QRect(220, 30, 451, 192));
        textOutput = new QTextBrowser(centralWidget);
        textOutput->setObjectName(QString::fromUtf8("textOutput"));
        textOutput->setGeometry(QRect(220, 270, 451, 192));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 10, 91, 16));
        label_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 250, 91, 16));
        label_5->setFont(font);
        pushDone = new QPushButton(centralWidget);
        pushDone->setObjectName(QString::fromUtf8("pushDone"));
        pushDone->setGeometry(QRect(590, 230, 75, 23));
        pushLoad = new QPushButton(centralWidget);
        pushLoad->setObjectName(QString::fromUtf8("pushLoad"));
        pushLoad->setGeometry(QRect(490, 230, 75, 23));
        textTime = new QTextBrowser(centralWidget);
        textTime->setObjectName(QString::fromUtf8("textTime"));
        textTime->setGeometry(QRect(90, 310, 101, 31));
        textRearrange = new QTextBrowser(centralWidget);
        textRearrange->setObjectName(QString::fromUtf8("textRearrange"));
        textRearrange->setGeometry(QRect(90, 350, 101, 31));
        textCompare = new QTextBrowser(centralWidget);
        textCompare->setObjectName(QString::fromUtf8("textCompare"));
        textCompare->setGeometry(QRect(90, 390, 101, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 310, 46, 13));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 350, 61, 20));
        label_7->setFont(font1);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 390, 61, 20));
        label_8->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 715, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        radioBubble->setText(QApplication::translate("MainWindow", "Bubble", 0, QApplication::UnicodeUTF8));
        radioBinary->setText(QApplication::translate("MainWindow", "BinaryInsert", 0, QApplication::UnicodeUTF8));
        radioShell->setText(QApplication::translate("MainWindow", "Shell", 0, QApplication::UnicodeUTF8));
        radioPyramid->setText(QApplication::translate("MainWindow", "Pyramide", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Type of sort:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Type of data:", 0, QApplication::UnicodeUTF8));
        checkBox_1->setText(QApplication::translate("MainWindow", "Numbers", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("MainWindow", "Text", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Results:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Input data:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Output data:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushDone->setToolTip(QApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\321\203", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushDone->setText(QApplication::translate("MainWindow", "Done", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushLoad->setToolTip(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\264\320\273\321\217 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\270", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushLoad->setText(QApplication::translate("MainWindow", "Load", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Time:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Rearrange:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Compare:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
