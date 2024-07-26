/********************************************************************************
** Form generated from reading UI file 'signingui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINGUI_H
#define UI_SIGNINGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signinguiClass
{
public:
    QWidget *centralWidget;
    QPushButton *signinbutton;
    QCheckBox *sellercheckbox;
    QCheckBox *buyercheckbox;
    QLineEdit *mailbox;
    QLineEdit *passbox;
    QLabel *label;
    QLabel *label_2;
    QCommandLinkButton *createaccountbutton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *signinguiClass)
    {
        if (signinguiClass->objectName().isEmpty())
            signinguiClass->setObjectName("signinguiClass");
        signinguiClass->resize(600, 400);
        centralWidget = new QWidget(signinguiClass);
        centralWidget->setObjectName("centralWidget");
        signinbutton = new QPushButton(centralWidget);
        signinbutton->setObjectName("signinbutton");
        signinbutton->setGeometry(QRect(280, 230, 75, 24));
        sellercheckbox = new QCheckBox(centralWidget);
        sellercheckbox->setObjectName("sellercheckbox");
        sellercheckbox->setGeometry(QRect(70, 230, 121, 20));
        buyercheckbox = new QCheckBox(centralWidget);
        buyercheckbox->setObjectName("buyercheckbox");
        buyercheckbox->setGeometry(QRect(70, 280, 121, 20));
        mailbox = new QLineEdit(centralWidget);
        mailbox->setObjectName("mailbox");
        mailbox->setGeometry(QRect(230, 50, 113, 21));
        passbox = new QLineEdit(centralWidget);
        passbox->setObjectName("passbox");
        passbox->setGeometry(QRect(230, 100, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 50, 49, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 100, 49, 16));
        createaccountbutton = new QCommandLinkButton(centralWidget);
        createaccountbutton->setObjectName("createaccountbutton");
        createaccountbutton->setGeometry(QRect(360, 270, 186, 41));
        signinguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(signinguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        signinguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(signinguiClass);
        mainToolBar->setObjectName("mainToolBar");
        signinguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(signinguiClass);
        statusBar->setObjectName("statusBar");
        signinguiClass->setStatusBar(statusBar);

        retranslateUi(signinguiClass);

        QMetaObject::connectSlotsByName(signinguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *signinguiClass)
    {
        signinguiClass->setWindowTitle(QCoreApplication::translate("signinguiClass", "signingui", nullptr));
        signinbutton->setText(QCoreApplication::translate("signinguiClass", "Sign in", nullptr));
        sellercheckbox->setText(QCoreApplication::translate("signinguiClass", "Sign in as seller", nullptr));
        buyercheckbox->setText(QCoreApplication::translate("signinguiClass", "Sign in as buyer", nullptr));
        label->setText(QCoreApplication::translate("signinguiClass", "email", nullptr));
        label_2->setText(QCoreApplication::translate("signinguiClass", "password", nullptr));
        createaccountbutton->setText(QCoreApplication::translate("signinguiClass", "Don't have accout?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signinguiClass: public Ui_signinguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINGUI_H
