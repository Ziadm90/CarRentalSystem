/********************************************************************************
** Form generated from reading UI file 'installmentgui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALLMENTGUI_H
#define UI_INSTALLMENTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_installmentguiClass
{
public:
    QWidget *centralWidget;
    QSlider *priceselect;
    QLabel *label;
    QCheckBox *advancepayment;
    QLabel *resultlabel;
    QPushButton *gobutton;
    QSpinBox *timeselect;
    QLineEdit *carbox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *installmentguiClass)
    {
        if (installmentguiClass->objectName().isEmpty())
            installmentguiClass->setObjectName("installmentguiClass");
        installmentguiClass->resize(775, 515);
        centralWidget = new QWidget(installmentguiClass);
        centralWidget->setObjectName("centralWidget");
        priceselect = new QSlider(centralWidget);
        priceselect->setObjectName("priceselect");
        priceselect->setGeometry(QRect(230, 50, 160, 18));
        priceselect->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 90, 161, 16));
        advancepayment = new QCheckBox(centralWidget);
        advancepayment->setObjectName("advancepayment");
        advancepayment->setGeometry(QRect(50, 150, 101, 20));
        resultlabel = new QLabel(centralWidget);
        resultlabel->setObjectName("resultlabel");
        resultlabel->setGeometry(QRect(180, 190, 401, 281));
        gobutton = new QPushButton(centralWidget);
        gobutton->setObjectName("gobutton");
        gobutton->setGeometry(QRect(90, 220, 75, 24));
        timeselect = new QSpinBox(centralWidget);
        timeselect->setObjectName("timeselect");
        timeselect->setGeometry(QRect(40, 50, 42, 22));
        carbox = new QLineEdit(centralWidget);
        carbox->setObjectName("carbox");
        carbox->setGeometry(QRect(30, 100, 113, 21));
        installmentguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(installmentguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 775, 22));
        installmentguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(installmentguiClass);
        mainToolBar->setObjectName("mainToolBar");
        installmentguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(installmentguiClass);
        statusBar->setObjectName("statusBar");
        installmentguiClass->setStatusBar(statusBar);

        retranslateUi(installmentguiClass);

        QMetaObject::connectSlotsByName(installmentguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *installmentguiClass)
    {
        installmentguiClass->setWindowTitle(QCoreApplication::translate("installmentguiClass", "installmentgui", nullptr));
        label->setText(QString());
        advancepayment->setText(QCoreApplication::translate("installmentguiClass", "Advance Payment", nullptr));
        resultlabel->setText(QCoreApplication::translate("installmentguiClass", "TextLabel", nullptr));
        gobutton->setText(QCoreApplication::translate("installmentguiClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class installmentguiClass: public Ui_installmentguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALLMENTGUI_H
