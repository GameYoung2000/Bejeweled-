#include "icon.h"

Icon::Icon()
{

}

Icon:: Icon(QWidget *parent, int x, int y):QPushButton(parent){
        this->x = x;
        this->y = y;
}

void Icon::setclicked()
{
    QObject::connect(this,SIGNAL(clicked()),this,SLOT(onclicked()));
}

void Icon::onclicked(){
    emit change(x, y);
}

//void Icon::change(int x, int y){

//}
