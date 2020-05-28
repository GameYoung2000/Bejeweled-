#include "zhuce.h"
#include "ui_zhuce.h"

zhuce::zhuce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zhuce)
{
    ui->setupUi(this);
}

zhuce::~zhuce()
{
    delete ui;
}

void zhuce::on_cancel_clicked()
{
   MainWindow *win = new MainWindow;
   win->show();
   this->close();
}
