#include "game.h"


int Game::movePlayer(int value_cube_a, int value_cube_b)
{
    auto score = value_cube_a + value_cube_b;
    int playerNewPosition = this->players[currentPlayer].getPlayerPosition() + score;
    while(playerNewPosition >= cards.size()-1){
        playerNewPosition -= (cards.size()-1);
        players[currentPlayer].addMoneyToBank(bankToStart);
    }
    players[currentPlayer].setPlayerPosition(playerNewPosition);
    return 0;
}

void Game::endGameForOnePlayer(int playerId)
{
    if(playerId>players.size()-1){
        return;
    }
    //auto tempCards = cards;
    int count =0;
    auto playerCards = players[playerId].getPlayerCards();
    for(int i =0;i<cards.size();i++){
        for(int j=0;j<players[playerId].getPlayerCards().size();j++){
            if(playerCards[j].getCardId()==cards[i].getCardId()){
                cards[i].setCardStatus(CardStatus::Free);
                count++;
                break;
            }
        }
    }
    //cards = tempCards;
    players[playerId].isInGame = false;

}



int Game::getCurrentPlayer() const
{
    return currentPlayer;
}

void Game::setCurrentPlayer(int newCurrentPlayer)
{
    currentPlayer = newCurrentPlayer;
}

const vector<Card> &Game::getCards() const
{
    return cards;
}

void Game::setCards(const vector<Card> &newCards)
{
    cards = newCards;
}

const vector<Player> &Game::getPlayers() const
{
    return players;
}

void Game::setPlayers(const vector<Player> &newPlayers)
{
    players = newPlayers;
}

Card &Game::getCard(int id)
{
    return cards[id];
}

Player* Game::getPlayerCard(int id)
{
    for(int i=0;i<players.size();i++){
        for(int j=0;j<players[i].getPlayerCards().size();i++){
            if(players[i].getPlayerCards()[j].getCardId()==id){
                return &players[i];
            }
        }
    }
    return nullptr;
}

int Game:: currentTurn(){

    prevPlayer = currentPlayer;
    if (currentPlayer == players.size() - 1) {
        currentPlayer = 0;
    }
    else currentPlayer++;
    while (!players[currentPlayer].isInGame) {
        if (currentPlayer > players.size() - 1) {
            currentPlayer = 0;
        }
        else currentPlayer++;
    }

    if(players[currentPlayer].isInPrison && players[currentPlayer].turnInJail!=3){
        return 1;
    }
    return 0;
}

int Game::takeCardOwner(Card card)
{
    for(int i=0;i<players.size();i++){
       auto tempCards = players[i].getPlayerCards();
       for(int c =0; c< tempCards.size();c++){
           if(tempCards[c].getCardId() == card.getCardId()){
               return i;
           }
       }
    }
    return -1;
}

void Game::addMoneyToPlayer(int count)
{
    players[currentPlayer].addMoneyToBank(count);
}

void Game::arendaPlayer(Card card)
{
    int cardOwner = takeCardOwner(card);
    if(cardOwner!=-1 && cardOwner>players.size()-1){
        players[cardOwner].addMoneyToBank(card.costOfArenda());
        players[currentPlayer].addMoneyToBank(-card.costOfArenda());
        if(players[currentPlayer].getBank()<=0){
            endGameForOnePlayer(currentPlayer);
            if(players.size()<=1){
                endGame();
            }
        }
    }
}

int Game::checkPlayerCard()
{
    auto cardId = players[currentPlayer].getPlayerPosition();
    Card* card = &cards[cardId];
    switch(card->getCardStatus()){
    case CardStatus :: Buy:{
        arendaPlayer(*card);\
        return 1;
        break;
    }
    case CardStatus :: NotForBuy:{
        switch (card->getCardType()) {
        case CardType::Special: {
            players[currentPlayer].addMoneyToBank(card->getCardId()>20? -200 : -100);
            return 0;
        }
        case CardType::Tribunal: {
            players[currentPlayer].setPlayerPosition(9);
            players[currentPlayer].isInPrison = true;
            players[currentPlayer].turnInJail=0;
            return 0;
        }
        case CardType::Money: {
            return 2;
        }
        case CardType::Chance: {
            return  3;
        }
        }
    }
    case CardStatus :: Free:{
        if(players[currentPlayer].getBank()>=card->getCost()){
            return 4;
        }
    }
    case CardStatus :: InBank:{
        break;
    }
    }
    return 0;
}

void Game::endGame() {

}

void Game::buyCard()
{
    Card* card = &cards[players[currentPlayer].getPlayerPosition()];
    players[currentPlayer].addMoneyToBank(-card->getCost());
    players[currentPlayer].addCard(*card);
    card->setCardStatus(CardStatus :: Buy);
}

Player *Game::getCurrentPlayerTurn()
{
    return &players[currentPlayer];
}

void Game::addMoneyToPlayer(int count, int playerId)
{
    players[playerId].addMoneyToBank(count);
}



int Game::getPrevPlayer() {
    return prevPlayer;
}
