#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
}

help::~help()
{
    delete ui;
}

void help::on_back_clicked()
{
    MainWindow *win = new MainWindow;
    win->show();
    this->close();
}
