#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "mainwindow.h"
#include "game.h"
#include "setting.h"

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_quit_clicked();

    void on_back_clicked();

    void on_setting_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
