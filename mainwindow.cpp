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
    this->hide();//������ر�
        game *videodlg = new game(this);//�½��ӽ���
        connect(videodlg,SIGNAL(sendsignal()),this,SLOT(reshow()));//������ӽ���ʱ�������������reshow()����
        videodlg->show();//�ӽ������



}

void MainWindow::on_quit_clicked()
{
    QApplication* app;
            app->quit();
}

void MainWindow::on_register_2_clicked()
{
    this->hide();//������ر�
        zhuce *videodlg = new zhuce(this);//�½��ӽ���
        connect(videodlg,SIGNAL(sendsignal()),this,SLOT(reshow()));//������ӽ���ʱ�������������reshow()����
        videodlg->show();//�ӽ������
}

void MainWindow::on_login_clicked()
{
    this->hide();//������ر�
        login *videodlg = new login(this);//�½��ӽ���
        connect(videodlg,SIGNAL(sendsignal()),this,SLOT(reshow()));//������ӽ���ʱ�������������reshow()����
        videodlg->show();//�ӽ������
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
