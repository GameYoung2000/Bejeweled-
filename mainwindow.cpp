#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_clicked()
{
    this->hide();//主界面关闭
        game *videodlg = new game(this);//新建子界面
        connect(videodlg,SIGNAL(sendsignal()),this,SLOT(reshow()));//当点击子界面时，调用主界面的reshow()函数
        videodlg->show();//子界面出现



}

void MainWindow::on_quit_clicked()
{
    QApplication* app;
            app->quit();
}

void MainWindow::on_register_2_clicked()
{
    this->hide();//主界面关闭
        zhuce *videodlg = new zhuce(this);//新建子界面
        connect(videodlg,SIGNAL(sendsignal()),this,SLOT(reshow()));//当点击子界面时，调用主界面的reshow()函数
        videodlg->show();//子界面出现
}

void MainWindow::on_login_clicked()
{
    this->hide();//主界面关闭
        login *videodlg = new login(this);//新建子界面
        connect(videodlg,SIGNAL(sendsignal()),this,SLOT(reshow()));//当点击子界面时，调用主界面的reshow()函数
        videodlg->show();//子界面出现
}

void MainWindow::on_rank_clicked()
{
    rank *win = new rank;
    win->show();
    this->close();
}

void MainWindow::on_setting_clicked()
{
    setting *win = new setting;
    win->show();
    this->close();
}

void MainWindow::on_help_clicked()
{
    help *win = new help;
    win->show();
    this->close();
}
