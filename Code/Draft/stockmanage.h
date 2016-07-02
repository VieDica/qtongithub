#ifndef STOCKMANAGE_H
#define STOCKMANAGE_H

#include <QMainWindow>

namespace Ui {
class StockManage;
}

class StockManage : public QMainWindow
{
    Q_OBJECT

public:
    explicit StockManage(QWidget *parent = 0);
    ~StockManage();

private:
    Ui::StockManage *ui;
};

#endif // STOCKMANAGE_H
