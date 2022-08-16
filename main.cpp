#include "mainwindow.h"

#include <QApplication>
#include "player.h"


vector<Card> InitCard();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    auto players =  vector<Player>();
    auto temp =  Player("Liza", 1500);
    players.push_back(temp);
    temp =Player("Stas",1500);
    players.push_back(temp);
    temp =Player("Ann",1500);
    players.push_back(temp);
    temp =Player("Tom",1500);
    players.push_back(temp);
    auto cards = InitCard();
    /*for (int i = 0; i < 40; i++) {
     auto temp = Card("????", i,CardType :: Firm, CardFirm :: CocaCola, CardStatus:: Free );
    cards.push_back(temp);
    }*/
    w.setPlayers(players);
    w.setCards(cards);
    w.setPlayersForTable();
    w.show();
    w.show();
    return a.exec();
}


vector<Card> InitCard() {
    vector<Card> res = vector<Card>();
    Card start = Card("1", 1, CardType::Start, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start= Card("2", 2, CardType::Firm, CardFirm::Brown, CardStatus::Free,60 , 2, 10, 30, 90, 160, 250, 30, 33, 50);
    res.push_back(start);
    start= Card("3", 3, CardType::Money, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("4", 4, CardType::Firm, CardFirm::Brown, CardStatus::Free, 60, 4, 20, 60, 180, 320, 450, 30, 33, 50);
    res.push_back(start);
    start = Card("5", 5, CardType:: Special, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("6", 6, CardType:: Firm, CardFirm::RailWay, CardStatus::Free);
    res.push_back(start);
    start = Card("7", 7, CardType::Firm, CardFirm::White, CardStatus::Free, 100, 6, 30, 90, 270, 400, 550,50, 55, 50);
    res.push_back(start);
    start = Card("8", 8, CardType::Chance, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("9", 9, CardType::Firm, CardFirm::White, CardStatus::Free, 100, 6, 30,90, 270, 400, 550, 50, 55, 50);
    res.push_back(start);
    start = Card("10", 10, CardType::Firm, CardFirm::White, CardStatus::Free, 120, 8,40, 100, 300, 450, 600, 60, 66, 50);
    res.push_back(start);
    start = Card("11", 11, CardType::Jail, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("12", 12, CardType::Firm, CardFirm::Pink, CardStatus::Free, 140, 10, 50, 150, 450, 625, 750, 70, 77, 100);
    res.push_back(start);
    start = Card("13", 13, CardType::Firm, CardFirm::Social, CardStatus::Free);
    res.push_back(start);
    start = Card("14", 14, CardType::Firm, CardFirm::Pink, CardStatus::Free, 140, 10, 50, 150, 450, 625, 750, 70, 77, 100);
    res.push_back(start);
    start = Card("15", 15, CardType::Firm, CardFirm::Pink, CardStatus::Free, 160, 12, 60, 180, 500, 700, 900, 80, 88, 100);
    res.push_back(start);
    start = Card("16", 16, CardType::Firm, CardFirm::RailWay, CardStatus::Free);
    res.push_back(start);
    start = Card("17", 17, CardType::Firm, CardFirm::Orange, CardStatus::Free, 180, 14, 70, 200, 550, 750, 950, 90, 99, 100);
    res.push_back(start);
    start = Card("18", 18, CardType::Money, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("19", 19, CardType::Firm, CardFirm::Orange, CardStatus::Free, 180, 14, 70, 200, 550, 750, 950, 90, 99, 100);
    res.push_back(start);
    start = Card("20", 20, CardType::Firm, CardFirm::Orange, CardStatus::Free, 200, 16, 80, 220, 600, 800, 1000, 100, 110, 100);
    res.push_back(start);
    start = Card("21", 21, CardType::Special, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("22", 22, CardType::Firm, CardFirm::Red, CardStatus::Free, 220,18, 90, 250, 700, 875, 1050, 110, 121, 150);
    res.push_back(start);
    start = Card("23", 23, CardType::Chance, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("24", 24, CardType::Firm, CardFirm::Red, CardStatus::Free, 220, 18, 90, 250, 700, 875, 1050, 110, 121, 150);
    res.push_back(start);
    start = Card("25", 25, CardType::Firm, CardFirm::Red, CardStatus::Free, 240, 20, 100, 300, 750, 925, 1100, 120, 132, 150);
    res.push_back(start);
    start = Card("26", 26, CardType::Firm, CardFirm::RailWay, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("27", 27, CardType::Firm, CardFirm::Yellow, CardStatus::Free, 260, 22, 150, 450, 1000, 1200, 1400, 130, 143, 150);
    res.push_back(start);
    start = Card("28", 28, CardType::Firm, CardFirm::Yellow, CardStatus::Free, 260, 22, 150, 450, 1000, 1200, 1400, 130, 143, 150);
    res.push_back(start);
    start = Card("29", 29, CardType::Firm, CardFirm::Social, CardStatus::Free);
    res.push_back(start);
    start = Card("30", 30, CardType::Firm, CardFirm::Yellow, CardStatus::Free, 280, 24, 120, 360, 850, 1025, 1200, 140, 154, 150);
    res.push_back(start);
    start = Card("31", 31, CardType::Tribunal, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("32", 32, CardType::Firm, CardFirm::Green, CardStatus::Free, 300, 26, 130, 390, 900, 1100, 1275, 150, 165, 200);
    res.push_back(start);
    start = Card("33", 33, CardType::Firm, CardFirm::Green, CardStatus::Free, 300, 26, 130, 390, 900, 1100, 1275, 150, 165, 200);
    res.push_back(start);
    start = Card("34", 34, CardType::Money, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("35", 35, CardType::Firm, CardFirm::Green, CardStatus::Free, 320, 28, 150, 450, 1000, 1200, 1400, 160, 176, 200);
    res.push_back(start);
    start = Card("36", 36, CardType::Firm, CardFirm::RailWay, CardStatus::Free);
    res.push_back(start);
    start = Card("37", 37, CardType::Chance, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("38", 38, CardType::Firm, CardFirm::Blue, CardStatus::Free, 350, 35, 175, 500, 1100, 1300, 1500, 175, 193, 200);
    res.push_back(start);
    start = Card("39", 39, CardType::Special, CardFirm::None, CardStatus::NotForBuy);
    res.push_back(start);
    start = Card("40", 40, CardType::Firm, CardFirm::Blue, CardStatus::Free, 400, 50, 200, 600, 1400, 1700,2000, 200, 220, 200);
    res.push_back(start);
    return res;



}
