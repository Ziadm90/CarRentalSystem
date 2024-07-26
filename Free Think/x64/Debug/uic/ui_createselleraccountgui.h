/********************************************************************************
** Form generated from reading UI file 'createselleraccountgui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATESELLERACCOUNTGUI_H
#define UI_CREATESELLERACCOUNTGUI_H

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

class Ui_createselleraccountguiClass
{
public:
    QWidget *centralWidget;
    QLineEdit *mailbox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *createaccountbutton;
    QLineEdit *numberbox;
    QLineEdit *namebox;
    QLineEdit *confirmpassbox;
    QLabel *label_4;
    QLineEdit *passbox;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *idbox;
    QLabel *label_6;
    QCommandLinkButton *signinbutton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *createselleraccountguiClass)
    {
        if (createselleraccountguiClass->objectName().isEmpty())
            createselleraccountguiClass->setObjectName("createselleraccountguiClass");
        createselleraccountguiClass->resize(733, 400);
        centralWidget = new QWidget(createselleraccountguiClass);
        centralWidget->setObjectName("centralWidget");
        mailbox = new QLineEdit(centralWidget);
        mailbox->setObjectName("mailbox");
        mailbox->setGeometry(QRect(180, 90, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 50, 49, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 90, 49, 16));
        createaccountbutton = new QPushButton(centralWidget);
        createaccountbutton->setObjectName("createaccountbutton");
        createaccountbutton->setGeometry(QRect(404, 150, 101, 24));
        numberbox = new QLineEdit(centralWidget);
        numberbox->setObjectName("numberbox");
        numberbox->setGeometry(QRect(180, 140, 113, 21));
        namebox = new QLineEdit(centralWidget);
        namebox->setObjectName("namebox");
        namebox->setGeometry(QRect(180, 50, 113, 21));
        confirmpassbox = new QLineEdit(centralWidget);
        confirmpassbox->setObjectName("confirmpassbox");
        confirmpassbox->setGeometry(QRect(180, 250, 113, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 200, 51, 16));
        passbox = new QLineEdit(centralWidget);
        passbox->setObjectName("passbox");
        passbox->setGeometry(QRect(180, 200, 113, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 140, 49, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 250, 101, 16));
        idbox = new QLineEdit(centralWidget);
        idbox->setObjectName("idbox");
        idbox->setGeometry(QRect(180, 310, 113, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 310, 71, 16));
        signinbutton = new QCommandLinkButton(centralWidget);
        signinbutton->setObjectName("signinbutton");
        signinbutton->setGeometry(QRect(380, 280, 231, 41));
        createselleraccountguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(createselleraccountguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 733, 22));
        createselleraccountguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(createselleraccountguiClass);
        mainToolBar->setObjectName("mainToolBar");
        createselleraccountguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(createselleraccountguiClass);
        statusBar->setObjectName("statusBar");
        createselleraccountguiClass->setStatusBar(statusBar);

        retranslateUi(createselleraccountguiClass);

        QMetaObject::connectSlotsByName(createselleraccountguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *createselleraccountguiClass)
    {
        createselleraccountguiClass->setWindowTitle(QCoreApplication::translate("createselleraccountguiClass", "createselleraccountgui", nullptr));
        label->setText(QCoreApplication::translate("createselleraccountguiClass", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("createselleraccountguiClass", "E-Mail", nullptr));
        createaccountbutton->setText(QCoreApplication::translate("createselleraccountguiClass", "Create account", nullptr));
        label_4->setText(QCoreApplication::translate("createselleraccountguiClass", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("createselleraccountguiClass", "Number", nullptr));
        label_5->setText(QCoreApplication::translate("createselleraccountguiClass", "Confirm Password", nullptr));
        label_6->setText(QCoreApplication::translate("createselleraccountguiClass", "National ID", nullptr));
        signinbutton->setText(QCoreApplication::translate("createselleraccountguiClass", "Already have Account?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createselleraccountguiClass: public Ui_createselleraccountguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATESELLERACCOUNTGUI_H
