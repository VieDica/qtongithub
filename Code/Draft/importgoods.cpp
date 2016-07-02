#include "importgoods.h"
#include "ui_importgoods.h"

ImportGoods::ImportGoods(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImportGoods)
{
    ui->setupUi(this);
}

ImportGoods::~ImportGoods()
{
    delete ui;
}
