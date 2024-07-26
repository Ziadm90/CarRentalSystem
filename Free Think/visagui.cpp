#include "visagui.h"

visagui::visagui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
    ui.expdate->setDisplayFormat("MM/yy");
    
    
    QDate minimumDate;
    minimumDate.setDate(2023, 5,5);  
    ui.expdate->setMinimumDate(minimumDate);
}

visagui::~visagui()
{}
void visagui::on_savedata_clicked()
{
    Visa k;
    k.visadata(ui.digitsbox->text().toStdString(), ui.nameoncardbox->text().toStdString(), ui.cvvbox->text().toStdString(), ui.expdate->text().toStdString());
    
    
}