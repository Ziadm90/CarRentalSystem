/********************************************************************************
** Form generated from reading UI file 'visagui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISAGUI_H
#define UI_VISAGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_visaguiClass
{
public:
    QWidget *centralWidget;
    QPushButton *savedata;
    QLineEdit *digitsbox;
    QLineEdit *nameoncardbox;
    QLineEdit *cvvbox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDateEdit *expdate;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *visaguiClass)
    {
        if (visaguiClass->objectName().isEmpty())
            visaguiClass->setObjectName("visaguiClass");
        visaguiClass->resize(1214, 400);
        centralWidget = new QWidget(visaguiClass);
        centralWidget->setObjectName("centralWidget");
        savedata = new QPushButton(centralWidget);
        savedata->setObjectName("savedata");
        savedata->setGeometry(QRect(460, 170, 75, 24));
        digitsbox = new QLineEdit(centralWidget);
        digitsbox->setObjectName("digitsbox");
        digitsbox->setGeometry(QRect(210, 40, 113, 21));
        nameoncardbox = new QLineEdit(centralWidget);
        nameoncardbox->setObjectName("nameoncardbox");
        nameoncardbox->setGeometry(QRect(210, 100, 113, 21));
        cvvbox = new QLineEdit(centralWidget);
        cvvbox->setObjectName("cvvbox");
        cvvbox->setGeometry(QRect(220, 170, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 101, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 100, 91, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 170, 49, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 240, 49, 16));
        expdate = new QDateEdit(centralWidget);
        expdate->setObjectName("expdate");
        expdate->setGeometry(QRect(210, 240, 110, 22));
        visaguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(visaguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1214, 22));
        visaguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(visaguiClass);
        mainToolBar->setObjectName("mainToolBar");
        visaguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(visaguiClass);
        statusBar->setObjectName("statusBar");
        visaguiClass->setStatusBar(statusBar);

        retranslateUi(visaguiClass);

        QMetaObject::connectSlotsByName(visaguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *visaguiClass)
    {
        visaguiClass->setWindowTitle(QCoreApplication::translate("visaguiClass", "visagui", nullptr));
        savedata->setText(QCoreApplication::translate("visaguiClass", "Save ", nullptr));
        label->setText(QCoreApplication::translate("visaguiClass", "16-digit number", nullptr));
        label_2->setText(QCoreApplication::translate("visaguiClass", "Name on card", nullptr));
        label_3->setText(QCoreApplication::translate("visaguiClass", "CVV", nullptr));
        label_4->setText(QCoreApplication::translate("visaguiClass", "EXP.Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class visaguiClass: public Ui_visaguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISAGUI_H
