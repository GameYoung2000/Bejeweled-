#include "game.h"
#include "ui_game.h"
#include <QString>
#include <QDebug>

game::game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);


    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            diamond[i][j] = new Icon(this, i, j);
            diamond[i][j]->setText(QString::number(8*j+i+1));
            diamond[i][j]->setGeometry(80 + 52 * i, 60 + 52 * j, 52, 52);
            diamond[i][j]->setclicked();
            connect(diamond[i][j], &Icon::change, this, &game::exchange);
        }
    }


}

game::~game()
{
    delete ui;
}

void game::on_menu_clicked()
{
    menu *win = new menu;
    win->show();
    this->close();
}

void game::exchange(int x , int y){
    if(time == 0){
        qDebug() << 0;
        x1 = x;
        y1 = y;
        time++;
    }
    else{
        qDebug() << 1;
        x2 = x;
        y2 = y;

        QString first = diamond[x1][y1]->text();
        QString second = diamond[x2][y2]->text();

        diamond[x1][y1]->setText(second);
        diamond[x2][y2]->setText(first);

        time = 0;

    }
}
