#ifndef SETTING_H
#define SETTING_H

#include <QMainWindow>
#include "mainwindow.h"
#include "game.h"
#include <qabstractbutton.h>

namespace Ui {
class setting;
}

class setting : public QMainWindow
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = nullptr);
    ~setting();

private slots:
    void on_back_clicked();

    void on_back_2_clicked();

    void on_checkBox_stateChanged(int arg1);


    void on_pushButton_clicked();

private:
    Ui::setting *ui;
};

#endif // SETTING_H
