#include "player.h"


int Player::getPlayerPosition() const
{
    return playerPosition;
}

void Player::setPlayerPosition(int newPlayerPosition)
{
    playerPosition = newPlayerPosition;
}

void Player::addMoneyToBank(int money)
{
    bank+=money;
}

const vector<Card> &Player::getPlayerCards() const
{
    return playerCards;
}

void Player::setPlayerCards(const vector<Card> &newPlayerCards)
{
    playerCards = newPlayerCards;
}

void Player::addCard(Card card)
{
    playerCards.push_back(card);
}

int Player::getBank()
{
    return bank;
}


void Player::setBank(int bank)
{
    this->bank = bank;

}


void Player::setName(string name)
{
    this->playerName = name;

}


string Player::getName()
{
    return playerName;
}

bool Player::buyCard(Card& cardForBuy)
{
    if (bank < cardForBuy.getCost() || cardForBuy.getCardStatus()!=CardStatus:: Free) {
        return false;
    }
    cardForBuy.setCardStatus(CardStatus::Buy);
    playerCards.push_back(cardForBuy);
    return true;
}
