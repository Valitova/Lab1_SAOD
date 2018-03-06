/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 5. Mar 17:19:22 2018
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *textData1;
    QLabel *label;
    QTextBrowser *textData2;
    QLabel *label_2;
    QTextBrowser *textInfo;
    QLabel *label_3;
    QPushButton *pushLoad;
    QPushButton *pushSave;
    QPushButton *pushAdd;
    QPushButton *pushDelete;
    QPushButton *pushChooseMax;
    QPushButton *pushAddFront;
    QPushButton *pushChooseMin;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(581, 402);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textData1 = new QTextBrowser(centralWidget);
        textData1->setObjectName(QString::fromUtf8("textData1"));
        textData1->setGeometry(QRect(10, 30, 181, 301));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        textData2 = new QTextBrowser(centralWidget);
        textData2->setObjectName(QString::fromUtf8("textData2"));
        textData2->setGeometry(QRect(200, 30, 181, 301));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 10, 111, 16));
        label_2->setFont(font);
        textInfo = new QTextBrowser(centralWidget);
        textInfo->setObjectName(QString::fromUtf8("textInfo"));
        textInfo->setGeometry(QRect(390, 30, 181, 111));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 10, 111, 16));
        label_3->setFont(font);
        pushLoad = new QPushButton(centralWidget);
        pushLoad->setObjectName(QString::fromUtf8("pushLoad"));
        pushLoad->setGeometry(QRect(390, 160, 75, 23));
        pushSave = new QPushButton(centralWidget);
        pushSave->setObjectName(QString::fromUtf8("pushSave"));
        pushSave->setGeometry(QRect(470, 160, 75, 23));
        pushAdd = new QPushButton(centralWidget);
        pushAdd->setObjectName(QString::fromUtf8("pushAdd"));
        pushAdd->setGeometry(QRect(390, 190, 75, 23));
        pushDelete = new QPushButton(centralWidget);
        pushDelete->setObjectName(QString::fromUtf8("pushDelete"));
        pushDelete->setGeometry(QRect(390, 220, 75, 23));
        pushChooseMax = new QPushButton(centralWidget);
        pushChooseMax->setObjectName(QString::fromUtf8("pushChooseMax"));
        pushChooseMax->setGeometry(QRect(390, 250, 75, 23));
        pushAddFront = new QPushButton(centralWidget);
        pushAddFront->setObjectName(QString::fromUtf8("pushAddFront"));
        pushAddFront->setGeometry(QRect(470, 190, 75, 23));
        pushChooseMin = new QPushButton(centralWidget);
        pushChooseMin->setObjectName(QString::fromUtf8("pushChooseMin"));
        pushChooseMin->setGeometry(QRect(470, 250, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 581, 20));
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
        label->setText(QApplication::translate("MainWindow", "Common Data:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Current Data:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Information:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushLoad->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \321\201 \321\204\320\260\320\271\320\273\320\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushLoad->setText(QApplication::translate("MainWindow", "Load from file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushSave->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260 \320\262 \321\204\320\260\320\271\320\273</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushSave->setText(QApplication::translate("MainWindow", "Save in file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushAdd->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\262 \320\272\320\276\320\275\320\265\321\206 \321\201\320\277\320\270\321\201\320\272\320\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushAdd->setText(QApplication::translate("MainWindow", "Add in end", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushDelete->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushDelete->setText(QApplication::translate("MainWindow", "Delete catalog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushChooseMax->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \321\201 \320\275\320\260\320\270\320\261\320\276\320\273\321\214\321\210\320\270\320\274 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\320\274 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\320\271</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushChooseMax->setText(QApplication::translate("MainWindow", "Choose max", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushAddFront->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\262 \320\275\320\260\321\207\320\260\320\273\320\276 \321\201\320\277\320\270\321\201\320\272\320\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushAddFront->setText(QApplication::translate("MainWindow", "Add in front", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushChooseMin->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \321\201 \320\275\320\260\320\270\320\274\320\265\320\275\321\214\321\210\320\270\320\274 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\320\274 \320\276\320\261\321\200\320\260\321\211\320\265\320\275\320\270\320\271</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushChooseMin->setText(QApplication::translate("MainWindow", "Choose min", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
