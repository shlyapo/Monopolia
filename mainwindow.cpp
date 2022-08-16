#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->upButton->setHidden(true);
    ui->upButton_2->setHidden(true);
    ui->upButton_3->setHidden(true);
    ui->l1->setHidden(true);
    ui->l2->setHidden(true);
    ui->l3->setHidden(true);
    ui->l4->setHidden(true);
    ui->l5->setHidden(true);
    ui->l6->setHidden(true);
    ui->label->setHidden(true);
    ui->label_2->setHidden(true);
    QPixmap pix1(":/image/Image/0.png");
    QIcon icon1(pix1);
    ui->card1->setIcon(icon1);
    ui->card1->setIconSize(QSize(90,90));

    QPixmap pix2(":/image/Image/1.png");
    QIcon icon2(pix2);
    ui->card2->setIcon(icon2);
    ui->card2->setIconSize(QSize(90,90));

    QPixmap pix3(":/image/Image/2.png");
    QIcon icon3(pix3);
    ui->card3->setIcon(icon3);
    ui->card3->setIconSize(QSize(90,90));

    QPixmap pix4(":/image/Image/3.png");
    QIcon icon4(pix4);
    ui->card4->setIcon(icon4);
    ui->card4->setIconSize(QSize(90,90));

    QPixmap pix5(":/image/Image/4.png");
    QIcon icon5(pix5);
    ui->card5->setIcon(icon5);
    ui->card5->setIconSize(QSize(90,90));

    QPixmap pix6(":/image/Image/5.png");
    QIcon icon6(pix6);
    ui->card6->setIcon(icon6);
    ui->card6->setIconSize(QSize(90,90));

    QPixmap pix7(":/image/Image/6.png");
    QIcon icon7(pix7);
    ui->card7->setIcon(icon7);
    ui->card7->setIconSize(QSize(90,90));

    QPixmap pix8(":/image/Image/7.png");
    QIcon icon8(pix8);
    ui->card8->setIcon(icon8);
    ui->card8->setIconSize(QSize(90,90));

    QPixmap pix9(":/image/Image/8.png");
    QIcon icon9(pix9);
    ui->card9->setIcon(icon9);
    ui->card9->setIconSize(QSize(90,90));

    QPixmap pix10(":/image/Image/9.png");
    QIcon icon10(pix10);
    ui->card10->setIcon(icon10);
    ui->card10->setIconSize(QSize(90,90));

    QPixmap pix11(":/image/Image/10.png");
    QIcon icon11(pix11);
    ui->card11->setIcon(icon11);
    ui->card11->setIconSize(QSize(90,90));

    QPixmap pix12(":/image/Image/11.png");
    QIcon icon12(pix12);
    ui->card12->setIcon(icon12);
    ui->card12->setIconSize(QSize(90,90));

    QPixmap pix13(":/image/Image/12.png");
    QIcon icon13(pix13);
    ui->card13->setIcon(icon13);
    ui->card13->setIconSize(QSize(90,90));

    QPixmap pix14(":/image/Image/13.png");
    QIcon icon14(pix14);
    ui->card14->setIcon(icon14);
    ui->card14->setIconSize(QSize(90,90));

    QPixmap pix15(":/image/Image/14.png");
    QIcon icon15(pix15);
    ui->card15->setIcon(icon15);
    ui->card15->setIconSize(QSize(90,90));

    QPixmap pix16(":/image/Image/15.png");
    QIcon icon16(pix16);
    ui->card16->setIcon(icon16);
    ui->card16->setIconSize(QSize(90,90));

    QPixmap pix17(":/image/Image/16.png");
    QIcon icon17(pix17);
    ui->card17->setIcon(icon17);
    ui->card17->setIconSize(QSize(90,90));

    QPixmap pix18(":/image/Image/17.png");
    QIcon icon18(pix18);
    ui->card18->setIcon(icon18);
    ui->card18->setIconSize(QSize(90,90));

    QPixmap pix19(":/image/Image/18.png");
    QIcon icon19(pix19);
    ui->card19->setIcon(icon19);
    ui->card19->setIconSize(QSize(90,90));

    QPixmap pix20(":/image/Image/19.png");
    QIcon icon20(pix20);
    ui->card20->setIcon(icon20);
    ui->card20->setIconSize(QSize(90,90));

    QPixmap pix21(":/image/Image/20.png");
    QIcon icon21(pix21);
    ui->card21->setIcon(icon21);
    ui->card21->setIconSize(QSize(90,90));


    QPixmap pix22(":/image/Image/21.png");
    QIcon icon22(pix22);
    ui->card22->setIcon(icon22);
    ui->card22->setIconSize(QSize(90,90));

    QPixmap pix23(":/image/Image/22.png");
    QIcon icon23(pix23);
    ui->card23->setIcon(icon23);
    ui->card23->setIconSize(QSize(90,90));

    QPixmap pix24(":/image/Image/23.png");
    QIcon icon24(pix24);
    ui->card24->setIcon(icon24);
    ui->card24->setIconSize(QSize(90,90));

    QPixmap pix25(":/image/Image/24.png");
    QIcon icon25(pix25);
    ui->card25->setIcon(icon25);
    ui->card25->setIconSize(QSize(90,90));

    QPixmap pix26(":/image/Image/25.png");
    QIcon icon26(pix26);
    ui->card26->setIcon(icon26);
    ui->card26->setIconSize(QSize(90,90));

    QPixmap pix27(":/image/Image/26.png");
    QIcon icon27(pix27);
    ui->card27->setIcon(icon27);
    ui->card27->setIconSize(QSize(90,90));

    QPixmap pix28(":/image/Image/27.png");
    QIcon icon28(pix28);
    ui->card28->setIcon(icon28);
    ui->card28->setIconSize(QSize(90,90));

    QPixmap pix29(":/image/Image/28.png");
    QIcon icon29(pix29);
    ui->card29->setIcon(icon29);
    ui->card29->setIconSize(QSize(90,90));

    QPixmap pix30(":/image/Image/29.png");
    QIcon icon30(pix30);
    ui->card30->setIcon(icon30);
    ui->card30->setIconSize(QSize(90,90));

    QPixmap pix31(":/image/Image/30.png");
    QIcon icon31(pix31);
    ui->card31->setIcon(icon31);
    ui->card31->setIconSize(QSize(90,90));

    QPixmap pix32(":/image/Image/31.png");
    QIcon icon32(pix32);
    ui->card32->setIcon(icon32);
    ui->card32->setIconSize(QSize(90,90));

    QPixmap pix33(":/image/Image/32.png");
    QIcon icon33(pix33);
    ui->card33->setIcon(icon33);
    ui->card33->setIconSize(QSize(90,90));

    QPixmap pix34(":/image/Image/33.png");
    QIcon icon34(pix34);
    ui->card34->setIcon(icon34);
    ui->card34->setIconSize(QSize(90,90));

    QPixmap pix35(":/image/Image/34.png");
    QIcon icon35(pix35);
    ui->card35->setIcon(icon35);
    ui->card35->setIconSize(QSize(90,90));

    QPixmap pix36(":/image/Image/35.png");
    QIcon icon36(pix36);
    ui->card36->setIcon(icon36);
    ui->card36->setIconSize(QSize(90,90));

    QPixmap pix37(":/image/Image/36.png");
    QIcon icon37(pix37);
    ui->card37->setIcon(icon37);
    ui->card37->setIconSize(QSize(90,90));

    QPixmap pix38(":/image/Image/37.png");
    QIcon icon38(pix38);
    ui->card38->setIcon(icon38);
    ui->card38->setIconSize(QSize(90,90));

    QPixmap pix39(":/image/Image/38.png");
    QIcon icon39(pix39);
    ui->card39->setIcon(icon39);
    ui->card39->setIconSize(QSize(90,90));

    QPixmap pix40(":/image/Image/39.png");
    QIcon icon40(pix40);
    ui->card40->setIcon(icon40);
    ui->card40->setIconSize(QSize(90,90));



    cards.push_back(ui->card1);
    cards.push_back(ui->card2);
    cards.push_back(ui->card3);
    cards.push_back(ui->card4);
    cards.push_back(ui->card5);
    cards.push_back(ui->card6);
    cards.push_back(ui->card7);
    cards.push_back(ui->card8);
    cards.push_back(ui->card9);
    cards.push_back(ui->card10);
    cards.push_back(ui->card11);
    cards.push_back(ui->card12);
    cards.push_back(ui->card13);
    cards.push_back(ui->card14);
    cards.push_back(ui->card15);
    cards.push_back(ui->card16);
    cards.push_back(ui->card17);
    cards.push_back(ui->card18);
    cards.push_back(ui->card19);
    cards.push_back(ui->card20);
    cards.push_back(ui->card21);
    cards.push_back(ui->card22);
    cards.push_back(ui->card23);
    cards.push_back(ui->card24);
    cards.push_back(ui->card25);
    cards.push_back(ui->card26);
    cards.push_back(ui->card27);
    cards.push_back(ui->card28);
    cards.push_back(ui->card29);
    cards.push_back(ui->card30);
    cards.push_back(ui->card31);
    cards.push_back(ui->card32);
    cards.push_back(ui->card33);
    cards.push_back(ui->card34);
    cards.push_back(ui->card35);
    cards.push_back(ui->card36);
    cards.push_back(ui->card37);
    cards.push_back(ui->card38);
    cards.push_back(ui->card39);
    cards.push_back(ui->card40);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setGame(Game engine) {
    //this->gameEngine = Game(engine)
}

void MainWindow::setPlayers(vector<Player> players) {
    this->gameEngine.setPlayers(players);
    for (int i = 0; i < players.size(); i++) {
        QLabel *pl = new QLabel("O", this);
        pl->setGeometry(ui->card1->geometry().x()+ui->card1->geometry().width()/2,ui->card1->geometry().y()+ui->card1->geometry().height()/3, 20, 20);
        pl->setObjectName(QString::number(i));
        this->players.push_back(pl);
    }
}

void MainWindow::setPlayersForTable() {
    for (int i = 0; i < gameEngine.getPlayers().size(); i++) {
        ui->tableWidget->insertRow(i);
        QTableWidgetItem* nameT = ui->tableWidget->item(i, 0);
        QTableWidgetItem* bank = ui->tableWidget->item(i, 1);
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem());
        nameT = new QTableWidgetItem();
        bank = new QTableWidgetItem();
        ui->tableWidget->setItem(i, 0, nameT);
        ui->tableWidget->setItem(i, 1, bank);
        auto player = gameEngine.getPlayers()[i];
        auto name = QString(player.getName().c_str());
        nameT->setText(name);
        bank->setText(to_string(player.getBank()).c_str());
    }
    ui->tableWidget->item(0, 2)->setText("Ходит");
}

void MainWindow::setCards(vector<Card> cards) {
    this->gameEngine.setCards(cards);
}

void MainWindow::roll() {
    int cube_1 = rand() % 6 + 1;
    int cube_2 = rand() % 6 + 1;

    string path_cube(":/Dice/dice");

    string cube_1_path(path_cube);
    cube_1_path.append(to_string(cube_1));
    cube_1_path.append(".png");
    std:: cout<<cube_1_path;
    string cube_2_path(path_cube);
    cube_2_path.append(to_string(cube_2));
    cube_2_path.append(".png");

    QPixmap pix_1(cube_1_path.c_str());

    QPixmap pix_2(cube_2_path.c_str());


    ui->cube_1->setPixmap(pix_1.scaled(180,180,Qt::KeepAspectRatio));
    ui->cube_2->setPixmap(pix_2.scaled(180, 180, Qt::KeepAspectRatio));

    //ui->cube_1->setText(QString::number(cube_1));
    //ui->cube_2->setText(QString::number(cube_2));

    if(gameEngine.getPlayers()[gameEngine.getCurrentPlayer()].isInPrison && cube_1!=cube_2 && gameEngine.getPlayers()[gameEngine.getCurrentPlayer()].turnInJail!=3)
    {
        Player* pl = gameEngine.getCurrentPlayerTurn();
        pl->turnInJail++;
    }
    else{
        auto turn = gameEngine.movePlayer(cube_1, cube_2);
        switch(turn){
        case 0:{
            break;
        }
        case 1:{

        }
        }

        auto card = gameEngine.checkPlayerCard();

        switch (card) {
        case 0:
            break;
        case 1:{
            break;
        }
        case 2:{
            auto r = rand()%5;
            switch(r){
            case 0:{
                gameEngine.addMoneyToPlayer(-100);
                break;
            }
            case 1:{
                gameEngine.addMoneyToPlayer(-50);
                break;
            }
            case 2: {
                gameEngine.addMoneyToPlayer(100);
                break;
            }
            case 3: {
                gameEngine.addMoneyToPlayer(-200);
                break;
            }
            case 4:{
                gameEngine.addMoneyToPlayer(50);
            }
            break;
        }
            }
        case 3:{
            auto r = rand()%5;
            switch(r){
            case 0:{
                gameEngine.addMoneyToPlayer(-100);
                break;
            }
            case 1:{
                gameEngine.addMoneyToPlayer(-50);
                break;
            }
            case 2: {
                gameEngine.addMoneyToPlayer(100);
                break;
            }
            case 3: {
                gameEngine.addMoneyToPlayer(-200);
                break;
            }
            case 4:{
                gameEngine.addMoneyToPlayer(50);
            }
            break;
        }
            break;
        }
        case 4:{
            DialogBuy db;
            db.gameEngine= &gameEngine;
            db.setEngine();
            db.setModal(true);
            db.exec();
            break;
        }
        }
    }
    auto next = gameEngine.currentTurn();
    switch(next){
    case 1:{
        DialogJail dj;
        dj.setModal(true);
        dj.exec();
    }
    }

    if(selectedCard!=0){
        showCard(selectedCard);
    }
    updateTable();
    updatePlayersPosition();
}


void MainWindow::updatePlayersPosition() {
    for (int i = 0; i < gameEngine.getPlayers().size(); i++) {
        auto pos = cards[gameEngine.getPlayers()[i].getPlayerPosition()];
        players[i]->setGeometry(pos->geometry().x()+pos->geometry().width()/2, pos->geometry().y()+pos->geometry().height()/3, 20, 20);
    }
}


void MainWindow::updateTable() {

    for (int i = 0; i < gameEngine.getPlayers().size(); i++) {

        auto player = gameEngine.getPlayers()[i];
        ui->tableWidget->item(i, 1)->setText(to_string( player.getBank()).c_str());
    }
    ui->tableWidget->item(gameEngine.getPrevPlayer(),2)->setText("");
    ui->tableWidget->item(gameEngine.getCurrentPlayer(), 2)->setText("O");
    ui->tableWidget->item(gameEngine.getCurrentPlayer(), 2)->setTextAlignment(1);
}

void MainWindow::showCard(int cardId) {

    auto card = gameEngine.getCards()[cardId];

    selectedCard  = cardId;
    ui->l1->setHidden(false);
    ui->l2->setHidden(false);
    ui->l3->setHidden(false);
    ui->l4->setHidden(false);
    ui->l5->setHidden(false);
    ui->l6->setHidden(false);
    ui->label->setHidden(false);
    ui->label_2->setHidden(false);
    ui->CardName->setText(card.getCardName().c_str());
    ui->CardName->setVisible(true);
    ui->costUp->setText(QString::number(card.house));
    ui->costUp->setVisible(true);
    ui->level->setText(QString::number(card.getCountOfUpgrated()));
    ui->level->setVisible(true);
    ui->renta->setText(QString::number(card.costOfArenda()));
    ui->renta->setVisible(true);
    ui->cost->setText(QString::number(card.getCost()));
    ui->cost_2->setText(QString::number(card.rent));
    ui->cost_3->setText(QString::number(card.buyRent));
    if(card.getCardStatus()==CardStatus::Buy){
        auto id = gameEngine.takeCardOwner(card);
        if(id==-1){
            ui->owner->setText("Свободна");
            ui->upButton_2->setHidden(true);
            ui->upButton_3->setHidden(true);
        }
        else{
            auto pl = gameEngine.getPlayers()[id];
            ui->owner->setText(pl.getName().c_str());
            ui->upButton_2->setHidden(false);
            ui->upButton_3->setHidden(true);
        }
    }
    if(card.getCardStatus()==CardStatus::InBank){
         ui->owner->setText("Заложена");
          ui->upButton_3->setHidden(false);
          ui->upButton_2->setHidden(true);
    }
    ui->owner->setHidden(false);
    ui->upButton->setDisabled((card.countOfHouse ==4)||(card.getFirm()==CardFirm:: RailWay) || (card.getFirm()==CardFirm:: Social));
    ui->upButton->setHidden(false);
    if(card.getCardStatus()==CardStatus::Free){
         ui->owner->setText("Свободна");
         ui->upButton_2->setHidden(true);
         ui->upButton_3->setHidden(true);
         ui->upButton->setHidden(true);
    }
}

void MainWindow::card1() {
    showCard(1);
}

void MainWindow::card2() {
    showCard(3);
}

void MainWindow::card3() {
    showCard(5);
}

void MainWindow::card4() {
    showCard(6);
}

void MainWindow::card5() {
    showCard(8);
}

void MainWindow::card6() {
    showCard(9);
}

void MainWindow::card7() {
    showCard(11);
}

void MainWindow::card8() {
    showCard(12);
}

void MainWindow::card9() {
    showCard(13);
}

void MainWindow::card10() {
    showCard(14);
}

void MainWindow::card11() {
    showCard(15);
}

void MainWindow::card12() {
    showCard(16);
}

void MainWindow::card13() {
    showCard(18);
}

void MainWindow::card14() {
    showCard(19);
}

void MainWindow::card15() {
    showCard(21);
}

void MainWindow::card16() {
    showCard(23);
}

void MainWindow::card17() {
    showCard(24);
}

void MainWindow::card18() {
    showCard(25);
}

void MainWindow::card19() {
    showCard(26);
}

void MainWindow::card20() {
    showCard(27);
}

void MainWindow::card21() {
    showCard(28);
}

void MainWindow::card22() {
    showCard(29);
}

void MainWindow::card23() {
    showCard(31);
}

void MainWindow::card24() {
    showCard(32);
}

void MainWindow::card25() {
    showCard(34);
}

void MainWindow::card26() {
    showCard(35);
}

void MainWindow::card27() {
    showCard(37);
}

void MainWindow::card28() {
    showCard(39);
}

void MainWindow::updateCard()
{
    Card* card = &gameEngine.getCard(selectedCard);

    if(card->getCardType()==CardType::Firm && card->getCardStatus() == CardStatus::Buy){
        Player* player = gameEngine.getPlayerCard(selectedCard+1);
        if(player==nullptr){
            return;
        }
    if(player->getBank()>=card->house)
           card->countOfHouse++;
           player->addMoneyToBank(-card->house);
           updateTable();
           showCard(selectedCard);
    }
}

void MainWindow::sell()
{
    Card* card = &gameEngine.getCard(selectedCard);


    if (card->getCardStatus() == CardStatus::Buy) {
        int pl = gameEngine.takeCardOwner(*card);
        if (pl != -1) {
            gameEngine.addMoneyToPlayer(card->rent, pl);
            updateTable();
            card->setCardStatus(CardStatus::InBank);
            showCard(selectedCard);
        }
    }


}

void MainWindow::buyAgain()
{


    Card* card = &gameEngine.getCard(selectedCard);

    cout<<card->buyRent;
    if (card->getCardStatus() == CardStatus::InBank) {
        Player* pl = gameEngine.getPlayerCard(card->getCardId());
        if (pl != nullptr) {
            if (pl->getBank() >= card->buyRent) {
                pl->addMoneyToBank(-card->buyRent);
                card->setCardStatus(CardStatus::Buy);
                updateTable();
                showCard(selectedCard);
            }

        }
    }
}

