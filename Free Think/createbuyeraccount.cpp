#include "createbuyeraccount.h"

createbuyeraccount::createbuyeraccount(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

createbuyeraccount::~createbuyeraccount()
{}
void createbuyeraccount::on_signinbutton_clicked()
{

	signingui* login;
	login = new signingui(this);
	login->show();
}
void createbuyeraccount::on_createaccountbutton_clicked()
{
	CreateBuyerAccount newuser;
	newuser.setdata(ui.mailbox->text().toStdString(), ui.passbox->text().toStdString(),ui.numberbox->text().toStdString(),ui.namebox->text().toStdString(),ui.confirmpassbox->text().toStdString());
	
	

    QMessageBox masgeBox;
    masgeBox.setText("Data Saved!");
    masgeBox.setInformativeText("Do you want to Add Visa Now ?");
    masgeBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard );
    masgeBox.setDefaultButton(QMessageBox::Save);
    masgeBox.button(QMessageBox::Save)->setText("No");
    masgeBox.button(QMessageBox::Discard)->setText("Yes");
    int retmsg = masgeBox.exec();

    switch (retmsg) {
   
        
    case QMessageBox::Discard:
       
        visagui* newdata;
        newdata = new visagui(this);
        newdata->show();
        break;
    
    default:
        
        break;
    }

}
