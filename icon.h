#ifndef ICON_H
#define ICON_H

#include <QPushButton>

class Icon : public QPushButton
{
    Q_OBJECT
public:
    Icon();
    int x, y;
    Icon(QWidget *parent, int x, int y);
    void setclicked();

signals:
    void change(int x, int y);
//    void clicked(int x, int y);

public slots:
    void onclicked();

};

#endif // ICON_H
