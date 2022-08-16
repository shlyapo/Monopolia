#pragma once
#include <iostream>
#include "card.h"
#include <vector>

using namespace std;
class Player
{
    int bank;
    string playerName;
    vector<Card>  playerCards;
    int playerPosition;

public:
    Player(string playerName, int bank) {
        this->bank = bank;
        this->playerName = playerName;
        playerPosition = 0;
    }

    bool isInGame = true;

    int turnInJail=0;
    bool isInPrison = false;

    int getBank();
    void setBank(int bank);
    void setName(string name);
    string getName();

    bool buyCard(Card& cardForBuy);
    int getPlayerPosition() const;
    void setPlayerPosition(int newPlayerPosition);
    void addMoneyToBank(int money);
    const vector<Card> &getPlayerCards() const;
    void setPlayerCards(const vector<Card> &newPlayerCards);
    void addCard(Card card);
};

#ifndef PLAYER_H
#define PLAYER_H

#endif // PLAYER_H
