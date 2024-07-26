#include "randomlistgui.h"

randomlistgui::randomlistgui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	File_random handler;
	;
	handler.readElements();
	handler.shuffleElements();
	handler.printElements();
	
    ;
    std::vector<QString> qStrings;

    for (const std::string& str : handler.a_elements) {
        QString qStr = QString::fromStdString(str);
        
        qStrings.push_back(qStr.replace(","," is for "));
    }

    

    for (const QString& item : qStrings) {
        ui.randomlist->addItem(item);
    }
    
}

randomlistgui::~randomlistgui()
{}
void randomlistgui::on_randomlist_itemDoubleClicked(QListWidgetItem* item)
{
    signingui* newlog;
    newlog = new signingui(this);
    newlog->show();
    string j=ui.randomlist->currentItem()->text().toStdString();
    File_random k;
    k.c = j;
}
void randomlistgui::on_filterbutton_clicked() {
    sortedbygui* newfilter;
    newfilter = new sortedbygui(this);
    newfilter->show();

}
void randomlistgui::on_searchmodelbutton_clicked() {
    searchgui* newsearch;
    newsearch = new searchgui(this);
    newsearch->show();

}
void randomlistgui::on_searchpricebutton_clicked() {
    /*choosenpricegui* newprice;
    newprice = new choosenpricegui(this);
    newprice->show();*/

}