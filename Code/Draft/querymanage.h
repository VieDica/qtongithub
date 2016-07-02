#ifndef QUERYMANAGE_H
#define QUERYMANAGE_H

#include <QMainWindow>

namespace Ui {
class QueryManage;
}

class QueryManage : public QMainWindow
{
    Q_OBJECT

public:
    explicit QueryManage(QWidget *parent = 0);
    ~QueryManage();

private:
    Ui::QueryManage *ui;
};

#endif // QUERYMANAGE_H
