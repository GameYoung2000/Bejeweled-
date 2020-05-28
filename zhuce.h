#ifndef ZHUCE_H
#define ZHUCE_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class zhuce;
}

class zhuce : public QDialog
{
    Q_OBJECT

public:
    explicit zhuce(QWidget *parent = nullptr);
    ~zhuce();

private slots:
    void on_cancel_clicked();

signals:
    void sendsignal();

private:
    Ui::zhuce *ui;
};

#endif // ZHUCE_H
