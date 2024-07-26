#include "addremovecarsgui.h"

addremovecarsgui::addremovecarsgui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.carbox->setVisible(false);
	ui.pricebox->setVisible(false);
	ui.label->setVisible(false);
	ui.label_2->setVisible(false);
}

addremovecarsgui::~addremovecarsgui()
{}


void addremovecarsgui::on_addbutton_clicked()
{
	if (ui.removebutton->isChecked()){
		ui.removebutton->setChecked(false);
		

	}
	ui.carbox->setVisible(true);
	ui.pricebox->setVisible(true);
	ui.label->setVisible(true);
	ui.label_2->setVisible(true);
}

void addremovecarsgui::on_removebutton_clicked()
{
	if (ui.addbutton->isChecked()){
		ui.addbutton->setChecked(false);
		
	}
	ui.carbox->setVisible(true);
	ui.pricebox->setVisible(false);
	ui.label->setVisible(true);
	ui.label_2->setVisible(false);
}

void addremovecarsgui::on_gobutton_clicked()
{
	if (ui.addbutton->isChecked()){
	
		addremovecars k;
		k.addcar(ui.carbox->text().toStdString(),ui.pricebox->text().toStdString());
		
	}
	if (ui.removebutton->isChecked()) {

		addremovecars k;
		k.removecar(ui.carbox->text().toStdString());
	}
	
}