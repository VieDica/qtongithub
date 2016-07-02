#include "salesmanage.h"
#include "ui_salesmanage.h"

SalesManage::SalesManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SalesManage)
{
    ui->setupUi(this);
}

SalesManage::~SalesManage()
{
    delete ui;
}
