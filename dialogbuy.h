#ifndef DIALOGBUY_H
#define DIALOGBUY_H

#include <QDialog>
#include "game.h"

namespace Ui {
class DialogBuy;
}

class DialogBuy : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBuy(QWidget *parent = nullptr);
    ~DialogBuy();

    Game* gameEngine;

    void setEngine();

private:
    Ui::DialogBuy *ui;

private slots:
    void Buy();
};

#endif // DIALOGBUY_H
