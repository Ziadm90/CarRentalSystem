#include "createselleraccountgui.h"

createselleraccountgui::createselleraccountgui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

createselleraccountgui::~createselleraccountgui()
{}


void createselleraccountgui::on_createaccountbutton_clicked()
{
	createselleraccount k;
	k.setData(ui.namebox->text().toStdString(), ui.numberbox->text().toStdString(), ui.mailbox->text().toStdString(), ui.passbox->text().toStdString(), ui.idbox->text().toStdString(),ui.confirmpassbox->text().toStdString());

    
        
        visagui* newdata;
        newdata = new visagui(this);
        newdata->show();
        
}
void createselleraccountgui::on_signinbutton_clicked()
{

	signingui* login;
	login = new signingui(this);
	login->show();
}