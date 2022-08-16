#include "card.h"

int Card::getCardId() const
{
    return cardId;
}

void Card::setCardId(int newCardId)
{
    cardId = newCardId;
}

void Card::setCardName(string cardName)
{
    this->cardName = cardName;
}

void Card::setCardType(CardType cardType)
{
    this->typeOfCard = cardType;
}

void Card::setCost(unsigned int cost)
{
    this->cost = cost;
}

void Card::setFirm(CardFirm firm)
{
    this->firm = firm;
}

void Card::setCountOfUpgrated(unsigned int countOfUpgrated)
{
    this->countOfHouse = countOfUpgrated;
}

void Card::setCardStatus(CardStatus cardStatus)
{
    this->status = cardStatus;
}

CardStatus Card::getCardStatus()
{
    return status;
}

string Card::getCardName()
{
    return cardName;
}

CardType Card::getCardType()
{
    return typeOfCard;
}

unsigned int Card::getCost()
{
    return cost;
}

CardFirm Card::getFirm()
{
    return firm;
}

unsigned int Card::getCountOfUpgrated()
{
    return countOfHouse;
}

unsigned int Card::costOfArenda()
{
    switch (countOfHouse)
    {
    case 0 :
        return count;
    case 1 :
        return oneHouse;
    case 2 :
        return twoHouse;
    case 3:
        return fourHouse;
    case 4:
        return hotel;
    }
}
