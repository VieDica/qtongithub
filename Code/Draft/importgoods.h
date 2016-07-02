#ifndef IMPORTGOODS_H
#define IMPORTGOODS_H

#include <QMainWindow>

namespace Ui {
class ImportGoods;
}

class ImportGoods : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImportGoods(QWidget *parent = 0);
    ~ImportGoods();

private:
    Ui::ImportGoods *ui;
};

#endif // IMPORTGOODS_H
