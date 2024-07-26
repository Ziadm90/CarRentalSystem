#include "installmentgui.h"
#include"randomlistgui.h"
installmentgui::installmentgui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	if (ui.priceselect->value() < 1800000) {
		ui.advancepayment->setVisible(false);
	}
	ui.priceselect->setSingleStep(20000);
	File_random k;
	k.c;
	ui.label->setText(QString::fromStdString(k.c));
}

installmentgui::~installmentgui()
{}
void installmentgui::on_priceselect_valueChanged(int value)
{
	ui.priceselect->setRange(0, 4750000);
	ui.label->setText(QString::number(ui.priceselect->sliderPosition()));
	if (ui.priceselect->value() < 1800000) {
		ui.advancepayment->setVisible(false);
	}
	else {
		ui.advancepayment->setVisible(true);
	}
	

}
void installmentgui::on_gobutton_clicked()
{
	Installment i;
	if (ui.advancepayment->isChecked()) {
		i.Y_OR_N = true;
	}
	else {
		i.Y_OR_N = false;
	}
	
	i.time = ui.timeselect->value();
	i.bigorsmall(ui.label->text().toStdString(),ui.carbox->text().toStdString());
	i.insurancePrice(ui.label->text().toInt());

	ui.resultlabel->setText(QString::fromStdString(i.advancepay));
	QMessageBox msgBox;
	msgBox.setText("About to Pay");
	msgBox.setInformativeText("Want to make insurance ?");
	msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
	msgBox.setDefaultButton(QMessageBox::Save);
	msgBox.button(QMessageBox::Save)->setText("Yes");
	msgBox.button(QMessageBox::Discard)->setText("No");
	int ret = msgBox.exec();

	switch (ret) {
	case QMessageBox::Save:
		QMessageBox::information(nullptr, "Payment done!", "Thanks!", QMessageBox::Ok);
		
		ui.resultlabel->setText(QString::fromStdString("Total is:"+i.insurancee));
		break;
	case QMessageBox::Discard:
		
		
		



		break;

	default:
		
		break;
	}
	shippinggui* newlocation;
	newlocation = new shippinggui(this);
	newlocation->show();
	
	
}