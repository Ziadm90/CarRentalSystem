/********************************************************************************
** Form generated from reading UI file 'reviewgui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEWGUI_H
#define UI_REVIEWGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reviewguiClass
{
public:
    QWidget *centralWidget;
    QPushButton *submitreview;
    QLabel *currentrate;
    QSlider *rateslider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *reviewguiClass)
    {
        if (reviewguiClass->objectName().isEmpty())
            reviewguiClass->setObjectName("reviewguiClass");
        reviewguiClass->resize(600, 400);
        centralWidget = new QWidget(reviewguiClass);
        centralWidget->setObjectName("centralWidget");
        submitreview = new QPushButton(centralWidget);
        submitreview->setObjectName("submitreview");
        submitreview->setGeometry(QRect(170, 240, 75, 24));
        currentrate = new QLabel(centralWidget);
        currentrate->setObjectName("currentrate");
        currentrate->setGeometry(QRect(190, 110, 49, 16));
        rateslider = new QSlider(centralWidget);
        rateslider->setObjectName("rateslider");
        rateslider->setGeometry(QRect(140, 60, 160, 18));
        rateslider->setOrientation(Qt::Horizontal);
        reviewguiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(reviewguiClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        reviewguiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(reviewguiClass);
        mainToolBar->setObjectName("mainToolBar");
        reviewguiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(reviewguiClass);
        statusBar->setObjectName("statusBar");
        reviewguiClass->setStatusBar(statusBar);

        retranslateUi(reviewguiClass);

        QMetaObject::connectSlotsByName(reviewguiClass);
    } // setupUi

    void retranslateUi(QMainWindow *reviewguiClass)
    {
        reviewguiClass->setWindowTitle(QCoreApplication::translate("reviewguiClass", "reviewgui", nullptr));
        submitreview->setText(QCoreApplication::translate("reviewguiClass", "Save", nullptr));
        currentrate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class reviewguiClass: public Ui_reviewguiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEWGUI_H
