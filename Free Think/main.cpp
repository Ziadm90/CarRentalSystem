#include "signingui.h"
#include "reviewgui.h"
#include "choosenpricegui.h"
#include"createbuyeraccount.h"
#include"randomlistgui.h"
#include"createselleraccountgui.h"
#include"visagui.h"
#include"shippinggui.h"
#include"searchgui.h"
#include"sortedbygui.h"
#include"installmentgui.h"
#include"addremovecarsgui.h"
//#include"insurancegui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    randomlistgui w;
    w.show();
    return a.exec();
}
