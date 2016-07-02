#include "stockmanage.h"
#include "ui_stockmanage.h"

StockManage::StockManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StockManage)
{
    ui->setupUi(this);
}

StockManage::~StockManage()
{
    delete ui;
}
