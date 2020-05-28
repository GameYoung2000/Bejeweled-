#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include "menu.h"
#include "Icon.h"

namespace Ui {
class game;
}

class game : public QMainWindow
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = nullptr);
    ~game();

    int time = 0;
    int x1, x2, y1, y2;
    Icon *diamond[8][8];

void exchange(int x, int y);

private slots:
    void on_menu_clicked();

private:
    Ui::game *ui;
};

#endif // GAME_H
