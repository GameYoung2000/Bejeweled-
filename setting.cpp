#include "setting.h"
#include "ui_setting.h"
#include<qmediaplayer.h>
#include<qmediaplaylist.h>
#include <QFileDialog>
#include<QUrl>

QMediaPlayer  *player = new QMediaPlayer;
QMediaPlaylist *playerlist = new QMediaPlaylist;

setting::setting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
}

setting::~setting()
{
    delete ui;
}

void setting::on_back_clicked()
{
    MainWindow *win = new MainWindow;
    win->show();
    this->close();
}

void setting::on_back_2_clicked()
{
    game *win = new game;
    win->show();
    this->close();
}


void setting::on_checkBox_stateChanged(int state)
{
    if (state == Qt::Checked){
         playerlist->addMedia(QUrl::fromLocalFile("D:\\695\\Sun.flac"));
         player->setPlaylist(playerlist);
         playerlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
         player->setVolume(30);
         player->play();
     }
     else{
         player->stop();
     }

}

void setting::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Music choosing", "D:/");
    playerlist->clear();
    playerlist->addMedia(QUrl::fromLocalFile(filename));
    player->setPlaylist(playerlist);
    playerlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
    player->setVolume(30);
    player->play();
}
