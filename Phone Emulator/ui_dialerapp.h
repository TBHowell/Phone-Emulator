/********************************************************************************
** Form generated from reading UI file 'dialerapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALERAPP_H
#define UI_DIALERAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialerApp
{
public:
    QAction *actionOpen_an_Address_Book;
    QAction *actionExit;
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *callNumber;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button4;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Button7;
    QPushButton *Button0;
    QPushButton *ButtonAstrisk;
    QPushButton *Button9Pound;
    QLabel *B2SubText;
    QLabel *B3SubText;
    QLabel *B6SubText;
    QLabel *B5SubText;
    QLabel *B4SubText;
    QLabel *B9SubText;
    QLabel *B7SubText;
    QLabel *B8SubText;
    QLabel *B0SubText;
    QPushButton *Call;
    QPushButton *Delete;
    QPushButton *recent1;
    QPushButton *recent2;
    QPushButton *recent3;
    QPushButton *recent5;
    QPushButton *recent4;
    QLabel *B2SubText_2;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DialerApp)
    {
        if (DialerApp->objectName().isEmpty())
            DialerApp->setObjectName(QString::fromUtf8("DialerApp"));
        DialerApp->resize(1002, 585);
        QFont font;
        font.setPointSize(8);
        DialerApp->setFont(font);
        actionOpen_an_Address_Book = new QAction(DialerApp);
        actionOpen_an_Address_Book->setObjectName(QString::fromUtf8("actionOpen_an_Address_Book"));
        actionExit = new QAction(DialerApp);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(DialerApp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(400, 10, 321, 511));
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        callNumber = new QLabel(centralWidget);
        callNumber->setObjectName(QString::fromUtf8("callNumber"));
        callNumber->setGeometry(QRect(20, 20, 271, 41));
        QFont font1;
        font1.setPointSize(20);
        callNumber->setFont(font1);
        callNumber->setFrameShape(QFrame::Box);
        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(20, 80, 75, 71));
        Button1->setFont(font1);
        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(120, 80, 75, 71));
        Button2->setFont(font1);
        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(220, 80, 75, 71));
        Button3->setFont(font1);
        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(120, 170, 75, 71));
        Button5->setFont(font1);
        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(220, 170, 75, 71));
        Button6->setFont(font1);
        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(20, 170, 75, 71));
        Button4->setFont(font1);
        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(120, 260, 75, 71));
        Button8->setFont(font1);
        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(220, 260, 75, 71));
        Button9->setFont(font1);
        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(20, 260, 75, 71));
        Button7->setFont(font1);
        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(120, 350, 75, 71));
        Button0->setFont(font1);
        ButtonAstrisk = new QPushButton(centralWidget);
        ButtonAstrisk->setObjectName(QString::fromUtf8("ButtonAstrisk"));
        ButtonAstrisk->setGeometry(QRect(20, 350, 75, 71));
        ButtonAstrisk->setFont(font1);
        Button9Pound = new QPushButton(centralWidget);
        Button9Pound->setObjectName(QString::fromUtf8("Button9Pound"));
        Button9Pound->setGeometry(QRect(220, 350, 75, 71));
        Button9Pound->setFont(font1);
        B2SubText = new QLabel(centralWidget);
        B2SubText->setObjectName(QString::fromUtf8("B2SubText"));
        B2SubText->setGeometry(QRect(150, 130, 21, 16));
        B3SubText = new QLabel(centralWidget);
        B3SubText->setObjectName(QString::fromUtf8("B3SubText"));
        B3SubText->setGeometry(QRect(250, 130, 21, 16));
        B6SubText = new QLabel(centralWidget);
        B6SubText->setObjectName(QString::fromUtf8("B6SubText"));
        B6SubText->setGeometry(QRect(250, 220, 31, 16));
        B5SubText = new QLabel(centralWidget);
        B5SubText->setObjectName(QString::fromUtf8("B5SubText"));
        B5SubText->setGeometry(QRect(150, 220, 21, 16));
        B4SubText = new QLabel(centralWidget);
        B4SubText->setObjectName(QString::fromUtf8("B4SubText"));
        B4SubText->setGeometry(QRect(50, 220, 21, 16));
        B9SubText = new QLabel(centralWidget);
        B9SubText->setObjectName(QString::fromUtf8("B9SubText"));
        B9SubText->setGeometry(QRect(240, 310, 31, 16));
        B7SubText = new QLabel(centralWidget);
        B7SubText->setObjectName(QString::fromUtf8("B7SubText"));
        B7SubText->setGeometry(QRect(40, 310, 31, 16));
        B8SubText = new QLabel(centralWidget);
        B8SubText->setObjectName(QString::fromUtf8("B8SubText"));
        B8SubText->setGeometry(QRect(150, 310, 21, 16));
        B0SubText = new QLabel(centralWidget);
        B0SubText->setObjectName(QString::fromUtf8("B0SubText"));
        B0SubText->setGeometry(QRect(150, 400, 21, 16));
        Call = new QPushButton(centralWidget);
        Call->setObjectName(QString::fromUtf8("Call"));
        Call->setGeometry(QRect(120, 440, 75, 71));
        Call->setFont(font1);
        Delete = new QPushButton(centralWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(310, 20, 75, 41));
        Delete->setFont(font1);
        recent1 = new QPushButton(centralWidget);
        recent1->setObjectName(QString::fromUtf8("recent1"));
        recent1->setGeometry(QRect(740, 290, 241, 51));
        recent1->setFont(font1);
        recent2 = new QPushButton(centralWidget);
        recent2->setObjectName(QString::fromUtf8("recent2"));
        recent2->setGeometry(QRect(740, 230, 241, 51));
        recent2->setFont(font1);
        recent3 = new QPushButton(centralWidget);
        recent3->setObjectName(QString::fromUtf8("recent3"));
        recent3->setGeometry(QRect(740, 170, 241, 51));
        recent3->setFont(font1);
        recent5 = new QPushButton(centralWidget);
        recent5->setObjectName(QString::fromUtf8("recent5"));
        recent5->setGeometry(QRect(740, 50, 241, 51));
        recent5->setFont(font1);
        recent4 = new QPushButton(centralWidget);
        recent4->setObjectName(QString::fromUtf8("recent4"));
        recent4->setGeometry(QRect(740, 110, 241, 51));
        recent4->setFont(font1);
        B2SubText_2 = new QLabel(centralWidget);
        B2SubText_2->setObjectName(QString::fromUtf8("B2SubText_2"));
        B2SubText_2->setGeometry(QRect(750, 10, 221, 31));
        QFont font2;
        font2.setPointSize(14);
        B2SubText_2->setFont(font2);
        DialerApp->setCentralWidget(centralWidget);
        Button8->raise();
        tableView->raise();
        callNumber->raise();
        Button1->raise();
        Button2->raise();
        Button3->raise();
        Button5->raise();
        Button6->raise();
        Button4->raise();
        Button9->raise();
        Button7->raise();
        Button0->raise();
        ButtonAstrisk->raise();
        Button9Pound->raise();
        B2SubText->raise();
        B3SubText->raise();
        B6SubText->raise();
        B5SubText->raise();
        B4SubText->raise();
        B9SubText->raise();
        B7SubText->raise();
        B8SubText->raise();
        B0SubText->raise();
        Call->raise();
        Delete->raise();
        recent1->raise();
        recent2->raise();
        recent3->raise();
        recent5->raise();
        recent4->raise();
        B2SubText_2->raise();
        menuBar = new QMenuBar(DialerApp);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1002, 21));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        DialerApp->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DialerApp);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DialerApp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DialerApp);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DialerApp->setStatusBar(statusBar);

        menuBar->addAction(menuTools->menuAction());
        menuTools->addAction(actionOpen_an_Address_Book);
        menuTools->addSeparator();
        menuTools->addAction(actionExit);

        retranslateUi(DialerApp);

        QMetaObject::connectSlotsByName(DialerApp);
    } // setupUi

    void retranslateUi(QMainWindow *DialerApp)
    {
        DialerApp->setWindowTitle(QApplication::translate("DialerApp", "DialerApp", nullptr));
        actionOpen_an_Address_Book->setText(QApplication::translate("DialerApp", "Open an Address Book", nullptr));
        actionExit->setText(QApplication::translate("DialerApp", "Exit", nullptr));
        callNumber->setText(QString());
        Button1->setText(QApplication::translate("DialerApp", "1", nullptr));
        Button2->setText(QApplication::translate("DialerApp", "2", nullptr));
        Button3->setText(QApplication::translate("DialerApp", "3", nullptr));
        Button5->setText(QApplication::translate("DialerApp", "5", nullptr));
        Button6->setText(QApplication::translate("DialerApp", "6", nullptr));
        Button4->setText(QApplication::translate("DialerApp", "4", nullptr));
        Button8->setText(QApplication::translate("DialerApp", "8", nullptr));
        Button9->setText(QApplication::translate("DialerApp", "9", nullptr));
        Button7->setText(QApplication::translate("DialerApp", "7", nullptr));
        Button0->setText(QApplication::translate("DialerApp", "0", nullptr));
        ButtonAstrisk->setText(QApplication::translate("DialerApp", "*", nullptr));
        Button9Pound->setText(QApplication::translate("DialerApp", "#", nullptr));
        B2SubText->setText(QApplication::translate("DialerApp", "ABC", nullptr));
        B3SubText->setText(QApplication::translate("DialerApp", "DEF", nullptr));
        B6SubText->setText(QApplication::translate("DialerApp", "MNO", nullptr));
        B5SubText->setText(QApplication::translate("DialerApp", "JKL", nullptr));
        B4SubText->setText(QApplication::translate("DialerApp", "GHI", nullptr));
        B9SubText->setText(QApplication::translate("DialerApp", "WXYZ", nullptr));
        B7SubText->setText(QApplication::translate("DialerApp", "PQRS", nullptr));
        B8SubText->setText(QApplication::translate("DialerApp", "TUV", nullptr));
        B0SubText->setText(QApplication::translate("DialerApp", "+", nullptr));
        Call->setText(QApplication::translate("DialerApp", "CALL", nullptr));
        Delete->setText(QApplication::translate("DialerApp", "< X", nullptr));
        recent1->setText(QString());
        recent2->setText(QString());
        recent3->setText(QString());
        recent5->setText(QString());
        recent4->setText(QString());
        B2SubText_2->setText(QApplication::translate("DialerApp", "Recently Dialed Numbers", nullptr));
        menuTools->setTitle(QApplication::translate("DialerApp", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialerApp: public Ui_DialerApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALERAPP_H
