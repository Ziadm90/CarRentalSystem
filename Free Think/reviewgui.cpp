#include "reviewgui.h"

reviewgui::reviewgui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

reviewgui::~reviewgui()
{}
void reviewgui::on_rateslider_valueChanged(int value)
{
    ui.currentrate->setText(QString::number(ui.rateslider->sliderPosition()));
    ui.rateslider->setRange(0, 10);
    ui.rateslider->setSingleStep(1);
}


void reviewgui::on_submitreview_clicked()
{
    
    review k;
    k.setReview(ui.rateslider->sliderPosition());
}
