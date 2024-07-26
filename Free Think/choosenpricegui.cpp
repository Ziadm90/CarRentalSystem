#include "choosenpricegui.h"
#include <QAbstractListModel>
#include <QList>



choosenpricegui::choosenpricegui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
    
}


choosenpricegui::~choosenpricegui()
{}
void choosenpricegui::on_selectprice_sliderMoved(int position)
{
    ui.selectprice->setRange(400000, 4800000);
    ui.selectprice->setSingleStep(100000);
    QString h = QString::number(ui.selectprice->sliderPosition());
    ui.current->setText(h);

}


void choosenpricegui::on_resultsbutton_clicked()
{
    ui.listWidget->clear();
    chosenprice k;
   
    
    int y = ui.selectprice->sliderPosition();
    k.readLines(y);
    QString str = QString::fromStdString(k.hh);
    QList<QString> list = str.split(", ");
    ;
   
    ui.listWidget->addItems(list);
    
    
   
}
void choosenpricegui::on_listWidget_itemDoubleClicked(QListWidgetItem* item)
{
    signingui* newlog;
    newlog = new signingui(this);
    newlog->show();
    string j = ui.listWidget->currentItem()->text().toStdString();
}