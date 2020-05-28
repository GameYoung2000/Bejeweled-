#ifndef RANK_H
#define RANK_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class rank;
}

class rank : public QDialog
{
    Q_OBJECT

public:
    explicit rank(QWidget *parent = nullptr);
    ~rank();

private slots:
    void on_back_clicked();

private:
    Ui::rank *ui;
};

#endif // RANK_H
