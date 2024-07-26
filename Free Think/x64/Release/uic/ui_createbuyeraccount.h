/********************************************************************************
** Form generated from reading UI file 'createbuyeraccount.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBUYERACCOUNT_H
#define UI_CREATEBUYERACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_createbuyeraccountClass
{
public:
    QWidget *centralWidget;
    QPushButton *createaccountbutton;
    QLineEdit *mailbox;
    QLineEdit *namebox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *numberbox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *passbox;
    QLineEdit *confirmpassbox;
    QCommandLinkButton *signinbutton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *createbuyeraccountClass)
    {
        if (createbuyeraccountClass->objectName().isEmpty())
            createbuyeraccountClass->setObjectName("createbuyeraccountClass");
        createbuyeraccountClass->resize(706, 400);
        centralWidget = new QWidget(createbuyeraccountClass);
        centralWidget->setObjectName("centralWidget");
        createaccountbutton = new QPushButton(centralWidget);
        createaccountbutton->setObjectName("createaccountbutton");
        createaccountbutton->setGeometry(QRect(374, 140, 101, 24));
        mailbox = new QLineEdit(centralWidget);
        mailbox->setObjectName("mailbox");
        mailbox->setGeometry(QRect(150, 80, 113, 21));
        namebox = new QLineEdit(centralWidget);
        namebox->setObjectName("namebox");
        namebox->setGeometry(QRect(150, 40, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 49, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 80, 49, 16));
        numberbox = new QLineEdit(centralWidget);
        numberbox->setObjectName("numberbox");
        numberbox->setGeometry(QRect(150, 130, 113, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 130, 49, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 190, 51, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 240, 101, 16));
        passbox = new QLineEdit(centralWidget);
        passbox->setObjectName("passbox");
        passbox->setGeometry(QRect(150, 190, 113, 21));
        confirmpassbox = new QLineEdit(centralWidget);
        confirmpassbox->setObjectName("confirmpassbox");
        confirmpassbox->setGeometry(QRect(150, 240, 113, 21));
        signinbutton = new QCommandLinkButton(centralWidget);
        signinbutton->setObjectName("signinbutton");
        signinbutton->setGeometry(QRect(360, 230, 231, 41));
        createbuyeraccountClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(createbuyeraccountClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 706, 22));
        createbuyeraccountClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(createbuyeraccountClass);
        mainToolBar->setObjectName("mainToolBar");
        createbuyeraccountClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(createbuyeraccountClass);
        statusBar->setObjectName("statusBar");
        createbuyeraccountClass->setStatusBar(statusBar);

        retranslateUi(createbuyeraccountClass);

        QMetaObject::connectSlotsByName(createbuyeraccountClass);
    } // setupUi

    void retranslateUi(QMainWindow *createbuyeraccountClass)
    {
        createbuyeraccountClass->setWindowTitle(QCoreApplication::translate("createbuyeraccountClass", "createbuyeraccount", nullptr));
        createaccountbutton->setText(QCoreApplication::translate("createbuyeraccountClass", "Create account", nullptr));
        label->setText(QCoreApplication::translate("createbuyeraccountClass", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("createbuyeraccountClass", "E-Mail", nullptr));
        label_3->setText(QCoreApplication::translate("createbuyeraccountClass", "Number", nullptr));
        label_4->setText(QCoreApplication::translate("createbuyeraccountClass", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("createbuyeraccountClass", "Confirm Password", nullptr));
        signinbutton->setText(QCoreApplication::translate("createbuyeraccountClass", "Already have account?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createbuyeraccountClass: public Ui_createbuyeraccountClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBUYERACCOUNT_H
