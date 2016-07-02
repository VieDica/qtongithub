#ifndef SALESMANAGE_H
#define SALESMANAGE_H

#include <QMainWindow>

namespace Ui {
class SalesManage;
}

class SalesManage : public QMainWindow
{
    Q_OBJECT

public:
    explicit SalesManage(QWidget *parent = 0);
    ~SalesManage();

private:
    Ui::SalesManage *ui;
};

#endif // SALESMANAGE_H
