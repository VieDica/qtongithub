#include "querymanage.h"
#include "ui_querymanage.h"

QueryManage::QueryManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QueryManage)
{
    ui->setupUi(this);
}

QueryManage::~QueryManage()
{
    delete ui;
}
