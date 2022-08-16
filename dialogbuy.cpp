#include "dialogbuy.h"
#include "ui_dialogbuy.h"

DialogBuy::DialogBuy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBuy)
{
    ui->setupUi(this);
}

DialogBuy::~DialogBuy()
{
    delete ui;
}

void DialogBuy::setEngine()
{
    auto cardId = gameEngine->getPlayers()[gameEngine->getCurrentPlayer()];
    auto card = gameEngine->getCards()[cardId.getPlayerPosition()];

    ui->l1->setHidden(false);
    ui->l2->setHidden(false);
    ui->l3->setHidden(false);
    ui->l4->setHidden(false);
    ui->l5->setHidden(false);
    ui->l6->setHidden(false);
    ui->CardName->setText(card.getCardName().c_str());
    ui->CardName->setVisible(true);
    ui->costUp->setText(QString::number(card.house));
    ui->costUp->setVisible(true);
    ui->level->setText(QString::number(card.getCountOfUpgrated()));
    ui->level->setVisible(true);
    ui->renta->setText(QString::number(card.costOfArenda()));
    ui->renta->setVisible(true);
    ui->cost->setText(QString::number(card.getCost()));
    if(card.getCardStatus()==CardStatus::Buy){
        auto id = gameEngine->takeCardOwner(card);
        if(id==-1){
            ui->owner->setText("Свободна");
        }
        else{
            auto pl = gameEngine->getPlayers()[id];
            ui->owner->setText(pl.getName().c_str());
        }
    }
    else{
        ui->owner->setText("Свободна");
    }
    ui->owner->setHidden(false);
}

void DialogBuy:: Buy(){
    gameEngine->buyCard();
    this->close();
}
