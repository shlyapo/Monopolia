#include "dialogjail.h"
#include "ui_dialogjail.h"

DialogJail::DialogJail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogJail)
{
    ui->setupUi(this);
}

DialogJail::~DialogJail()
{
    delete ui;
}

void DialogJail::setGameEngine()
{
    ui->count->setText(QString::number(3-gameEngine->getCurrentPlayerTurn()->turnInJail));
    ui->pushButton->setDisabled(gameEngine->getCurrentPlayerTurn()->getBank()<50);
}

void DialogJail::freedom()
{
    gameEngine->getCurrentPlayerTurn()->addMoneyToBank(-50);
    gameEngine->getCurrentPlayerTurn()->isInPrison=false;
    gameEngine->getCurrentPlayerTurn()->turnInJail=0;
    this->close();
}
