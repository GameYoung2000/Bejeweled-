#ifndef CHENGGONG_H
#define CHENGGONG_H

#include <QDialog>

namespace Ui {
class chenggong;
}

class chenggong : public QDialog
{
    Q_OBJECT

public:
    explicit chenggong(QWidget *parent = nullptr);
    ~chenggong();

private:
    Ui::chenggong *ui;
};

#endif // CHENGGONG_H
