#include "sortedbygui.h"

sortedbygui::sortedbygui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
    ui.rateselect->setVisible(false);
    ui.label->setVisible(false);
    ui.lineEdit->setVisible(false);
}

sortedbygui::~sortedbygui()
{}

SortedList l;
void sortedbygui::on_resultsbutton_clicked()
{
    if (ui.ratecheckbox->isChecked())
    {
        ui.listWidget->clear();
        l.setrate(ui.label->text().toStdString());
        QString str = QString::fromStdString(l.result);
        QStringList l = str.split('\n');
        ui.listWidget->addItems(l);
    }
    if (ui.pricecheckbox->isChecked())
    {
        ui.listWidget->clear();
        ui.label_2->setText("Price:");
        l.setprice(ui.lineEdit->text().toStdString());
        QString str = QString::fromStdString(l.result);
        QStringList l = str.split('\n');
        ui.listWidget->addItems(l);
    }
    if (ui.modelcheckbox->isChecked())
    {
        ui.label_2->setText("Model:");
        ui.listWidget->clear();
        l.setmodel(ui.lineEdit->text().toStdString());
        QString str = QString::fromStdString(l.result);
        QStringList l=str.split('\n');
        ui.listWidget->addItems(l);
    }
}


void sortedbygui::on_ratecheckbox_stateChanged()
{
    if (ui.ratecheckbox->isChecked()) {

        ui.modelcheckbox->setChecked(false);
        ui.pricecheckbox->setChecked(false);
        ui.rateselect->setRange(0, 10);
        ui.label->setText(QString::number(ui.rateselect->sliderPosition()));
        ui.rateselect->setVisible(true);
        ui.label->setVisible(true);
        
    }
    else {
        ui.label->setVisible(false);
        ui.rateselect->setVisible(false);
    }

}

void sortedbygui::on_pricecheckbox_stateChanged()
{
    if (ui.pricecheckbox->isChecked()) {

        ui.modelcheckbox->setChecked(false);
        ui.ratecheckbox->setChecked(false);
        ui.lineEdit->setVisible(true);
    }
    else{ ui.lineEdit->setVisible(false); }

}
void sortedbygui::on_modelcheckbox_stateChanged() {
    if (ui.modelcheckbox->isChecked()) {

        ui.pricecheckbox->setChecked(false);
        ui.ratecheckbox->setChecked(false);
        ui.lineEdit->setVisible(true);
    }
    else{ ui.lineEdit->setVisible(false); }
}

    



void sortedbygui::on_rateselect_valueChanged()
{
    if (ui.ratecheckbox->isChecked()) {

        ui.modelcheckbox->setChecked(false);
        ui.pricecheckbox->setChecked(false);
        ui.rateselect->setRange(0, 10);
        ui.label->setText(QString::number(ui.rateselect->sliderPosition()));
    }
}
void sortedbygui::on_listWidget_itemDoubleClicked(QListWidgetItem* item)
{
    signingui* newlog;
    newlog = new signingui(this);
    newlog->show();
    string j = ui.listWidget->currentItem()->text().toStdString();
}