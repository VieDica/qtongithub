#include "personnelmanage.h"
#include "ui_personnelmanage.h"

PersonnelManage::PersonnelManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PersonnelManage)
{
    ui->setupUi(this);
}

PersonnelManage::~PersonnelManage()
{
    delete ui;
}
