#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_quit_clicked()
{
    MainWindow *win = new MainWindow;
    win->show();
    this->close();
}

void menu::on_back_clicked()
{
    game *win = new game;
    win->show();
    this->close();
}

void menu::on_setting_clicked()
{
    setting *win = new setting;
    win->show();
    this->close();
}
