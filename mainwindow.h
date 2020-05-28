#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include "zhuce.h"
#include "login.h"
#include "rank.h"
#include "setting.h"
#include "help.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_start_clicked();

    void on_quit_clicked();

    void on_register_2_clicked();

    void on_login_clicked();

    void on_rank_clicked();

    void on_setting_clicked();

    void on_help_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
