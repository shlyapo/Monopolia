#pragma once

#include "player.h"




using namespace std;
class  Game{

    vector<Player> players;
    vector<Card> cards;


    int currentPlayer;
    int prevPlayer;
    const int bankToStart = 200;
public:

    //MainWindow *mainWindow;

    Game(vector<Player> players, vector<Card> cards){
        this->cards = cards;
        this->players = players;
        this->currentPlayer = 0;
        prevPlayer = 0;
    }

    Game() {
        this->cards = vector<Card>();
        this->players = vector<Player>();
        this->currentPlayer = 0;
        prevPlayer = 0;
    }

    Game(const Game& game) {
        this->cards = game.cards;
        this->players = game.players;
        this->currentPlayer = game.currentPlayer;
        this->prevPlayer = game.prevPlayer;
    }

    int getCurrentPlayer() const;
    void setCurrentPlayer(int newCurrentPlayer);

    int getPrevPlayer();

    const vector<Card> &getCards() const;
    void setCards(const vector<Card> &newCards);

    const vector<Player> &getPlayers() const;
    void setPlayers(const vector<Player> &newPlayers);

    Card& getCard(int id);

    Player* getPlayerCard(int id);

    //rule of game

    int currentTurn();
    int checkPlayerCard();
    int movePlayer(int value_cube_a, int value_cube_b);
    void endGameForOnePlayer(int playerId);
    void endGame();

    void buyCard();

    Player* getCurrentPlayerTurn();

    void addMoneyToPlayer(int count, int playerId);

    int takeCardOwner(Card card);
    void addMoneyToPlayer(int count);
    void arendaPlayer(Card card);


private:

};

