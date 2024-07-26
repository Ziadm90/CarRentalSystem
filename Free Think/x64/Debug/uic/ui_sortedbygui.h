/********************************************************************************
** Form generated from reading UI file 'sortedbygui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTEDBYGUI_H
#define UI_SORTEDBYGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sortedbyguiClass
{
public:
    QWidget *centralWidget;
    QCheckBox *ratecheckbox;
    QCheckBox *pricecheckbox;
    QCheckBox *modelcheckbox;
    QPushButton *resultsbutton;
    QLineEdit *lineEdit;
    QLabel *label;
    QSlider *rateselect;
    QListWidget *listWidget;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sortedbyguiClass)
    {
        if (sortedbyguiClass->objectName().isEmpty())
            sortedbyguiClass->setObjectName("sortedbyguiClass");
        sortedbyguiClass->resize(600, 400);
        centralWidget = new QWidget(sortedbyguiClass);
        centralWidget->setObjectName("centralWidget");
        ratecheckbox = new QCheckBox(centralWidget);
        ratecheckbox->setObjectName("ratecheckbox");
        ratecheckbox->setGeometry(QRect(30, 20, 91, 20));
        pricecheckbox = new QCheckBox(centralWidget);
        pricecheckbox->setObjectName("pricecheckbox");
        pricecheckbox->setGeometry(QRect(30, 60, 101, 20));
        modelcheckbox = new QCheckBox(centralWidget);
        modelcheckbox->setObjectName("modelcheckbox");
        modelcheckbox->setGeometry(QRect(30, 100, 101, 20));
        resultsbutton = new QPushButton(centralWidget);
        resultsbutton->setObjectName("resultsbutton");
        resultsbutton->setGeometry(QRect(340, 250, 75, 24));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(330, 80, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 220, 49, 16));
        rateselect = new QSlider(centralWidget);
        rateselect->setObjectName("rateselect");
        rateselect->setGeometry(QRect(310, 200, 160, 18));
        rateselect->setOrientation(Qt::Horizontal);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 130, 256, 192));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 80, 49, 16));
        sortedbyguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(sortedbyguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        sortedbyguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sortedbyguiClass);
        mainToolBar->setObjectName("mainToolBar");
        sortedbyguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sortedbyguiClass);
        statusBar->setObjectName("statusBar");
        sortedbyguiClass->setStatusBar(statusBar);

        retranslateUi(sortedbyguiClass);

        QMetaObject::connectSlotsByName(sortedbyguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *sortedbyguiClass)
    {
        sortedbyguiClass->setWindowTitle(QCoreApplication::translate("sortedbyguiClass", "sortedbygui", nullptr));
        ratecheckbox->setText(QCoreApplication::translate("sortedbyguiClass", "Filter by rate", nullptr));
        pricecheckbox->setText(QCoreApplication::translate("sortedbyguiClass", "Filter by price", nullptr));
        modelcheckbox->setText(QCoreApplication::translate("sortedbyguiClass", "Filter by model", nullptr));
        resultsbutton->setText(QCoreApplication::translate("sortedbyguiClass", "Go!", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sortedbyguiClass: public Ui_sortedbyguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTEDBYGUI_H
