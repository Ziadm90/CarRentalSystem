#include "searchgui.h"

searchgui::searchgui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

searchgui::~searchgui()
{}
void searchgui::on_searchbutton_clicked() {
    Search l;
	
	l.findCar(ui.searchbox->text().toStdString());
	

	ui.listWidget->addItem(QString::fromStdString(l.list1));
	
}
void searchgui::on_listWidget_itemDoubleClicked(QListWidgetItem* item)
{
	signingui* newlog;
	newlog = new signingui(this);
	newlog->show();
	string j = ui.listWidget->currentItem()->text().toStdString();
}
