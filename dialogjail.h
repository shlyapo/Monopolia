#ifndef DIALOGJAIL_H
#define DIALOGJAIL_H

#include <QDialog>
#include "game.h"

namespace Ui {
class DialogJail;
}

class DialogJail : public QDialog
{
    Q_OBJECT

public:
    explicit DialogJail(QWidget *parent = nullptr);
    ~DialogJail();

    Game* gameEngine;

    void setGameEngine();

private:
    Ui::DialogJail *ui;

private slots:

    void freedom();
};

#endif // DIALOGJAIL_H
