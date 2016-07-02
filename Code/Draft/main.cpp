#include "mainwindow.h"
#include "salesmanage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SalesManage w;
    w.show();

    return a.exec();
}
