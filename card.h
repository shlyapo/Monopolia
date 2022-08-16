#pragma once
#include <iostream>
using namespace std;

enum CardType {
    Special = 1,
    Start = 2,
    Firm = 3,
    Jail =4,
    Parking = 5,
    Tribunal = 6,
    Chance = 7,
    Money =8,
};

enum CardFirm {
    None = 0,
    Brown = 1,
    Pink =2,
    Orange =3,
    Red =4,
    Yellow =5,
    Green =6,
    Blue =7,
    RailWay = 8,
    Social =9,
    White = 10
};

enum  CardStatus {
    Free = 1,
    Buy =2,
    NotForBuy=3,
    InBank = 4,
};


class Card
{
private:
    string cardName;
    int cardId;
    CardType typeOfCard;
    unsigned int cost;
    CardFirm firm;
    CardStatus status;
public:

    unsigned int count=0, oneHouse=0, twoHouse=0, threeHouse=0, fourHouse=0, rent=0, buyRent=0, hotel=0, house=0, countOfHouse = 0;

    Card(string cardName, int cardId, CardType cardType, CardFirm firm, CardStatus status) {
        this->cardName = cardName;
        this->cardId = cardId;
        this->typeOfCard = cardType;
        this->firm = firm;
        this->status = status;
        if (firm == CardFirm::RailWay) {
            this->cost = 200;
            this->count = 50;
        }
        if (firm == CardFirm::Social) {
            this->cost = 150;
            this->count=25;
        }
    }

    Card(string cardName, int cardId, CardType cardType, CardFirm firm, CardStatus status, unsigned int cost, unsigned int count, unsigned int oneHouse, unsigned int twoHouse, unsigned int threeHouse, unsigned int fourHouse, unsigned int hotel, unsigned int rent, unsigned int buyRent, unsigned int house) {
        this->cardName = cardName;
        this->cardId = cardId;
        this->typeOfCard = cardType;
        this->firm = firm;
        this->status = status;
        this->cost = cost;
        this->count = count;
        this->oneHouse = oneHouse;
        this->twoHouse = twoHouse;
        this->threeHouse = threeHouse;
        this->fourHouse = fourHouse;
        this->hotel = hotel;
        this->rent = rent;
        this->buyRent = buyRent;
        this->house = house;
    }

    Card(){

    }

    void setCardName(string cardName);
    void setCardType(CardType cardType);
    void setCost(unsigned int cost);
    void setFirm(CardFirm firm);
    void setCountOfUpgrated(unsigned int countOfUpgrated);
    void setCardStatus(CardStatus cardStatus);

    CardStatus getCardStatus();
    string getCardName();
    CardType getCardType();
    unsigned int getCost();
    CardFirm getFirm();
    unsigned int getCountOfUpgrated();
    unsigned int costOfArenda();


    int takeCostWithUpgrade();
    int getCardId() const;
    void setCardId(int newCardId);
};

