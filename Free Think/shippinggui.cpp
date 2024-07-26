#include "shippinggui.h"

shippinggui::shippinggui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

shippinggui::~shippinggui()
{}
void shippinggui::on_savebutton_clicked() {

	shippingclass k;
	k.setlocation(ui.locationbox->text().toStdString());
	hide();
	

}