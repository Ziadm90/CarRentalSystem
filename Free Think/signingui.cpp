#include "signingui.h"
#include <QtWidgets/QApplication>
signingui::signingui(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

signingui::~signingui()
{}
void signingui::on_signinbutton_clicked()
{
    signin k;
    string email1 = ui.mailbox->text().toStdString();
    string password1 = ui.passbox->text().toStdString();
    if (ui.buyercheckbox->isChecked()) {
        k.buyersignin(email1, password1);

        
    }
    if (ui.sellercheckbox->isChecked()) {
        k.sellersignin(email1, password1);

    }
    if (!(ui.sellercheckbox->isChecked()
        || ui.buyercheckbox->isChecked())) {
        QMessageBox::information(this, "Choose needed!", "You have to choose whether you are buyer or seller!", QMessageBox::Ok);
    }
    
    if (k.signseller == true) {
        addremovecarsgui* newcars;
        newcars = new addremovecarsgui(this);
        newcars->show();
    }
    if (k.signbuyer == true) {

        QMessageBox msgBox;
        msgBox.setText("Signed in!");
        msgBox.setInformativeText("Do you want to pay by installments ?");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        msgBox.button(QMessageBox::Save)->setText("Yes");
        msgBox.button(QMessageBox::Discard)->setText("No");
        int ret = msgBox.exec();

        switch (ret) {
        case QMessageBox::Save:
            
            installmentgui* newdata;
            newdata = new installmentgui(this);
            newdata->show();
            break;
        case QMessageBox::Discard:
            
            shippinggui* newlocation;
            newlocation = new shippinggui(this);
            newlocation->show();

            break;

        default:
            break;
        }
    }
    



 
}
void signingui::on_sellercheckbox_stateChanged(int arg1)
{
    if (ui.sellercheckbox->isChecked() && ui.buyercheckbox->isChecked()) {
        ui.buyercheckbox->setChecked(false);
    }
}
void signingui::on_buyercheckbox_stateChanged(int arg1)
{
    if (ui.sellercheckbox->isChecked() && ui.buyercheckbox->isChecked()) {
        ui.sellercheckbox->setChecked(false);

    }

}
void signingui::on_createaccountbutton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Redirecting...");
    msgBox.setInformativeText("Do you want to sign in as buyer or seller?");
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    msgBox.button(QMessageBox::Save)->setText("Seller");
    msgBox.button(QMessageBox::Discard)->setText("Buyer");
    int ret = msgBox.exec();

    switch (ret) {
    case QMessageBox::Save:
        
        createselleraccountgui* newseller;
        newseller = new createselleraccountgui(this);
        newseller->show();
        break;
    case QMessageBox::Discard:
        createbuyeraccount* newbuyer;
        newbuyer = new createbuyeraccount(this);
        newbuyer->show();
        break;
    
    default:
        break;
    }
    
    
}