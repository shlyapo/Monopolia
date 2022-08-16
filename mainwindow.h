#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once

#include <QMainWindow>
#include "game.h"
#include <QPushButton>
#include <QLabel>
#include "dialogbuy.h"
#include "dialogjail.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setGame(Game engine);
    void setPlayersForTable();
    void setPlayers(vector<Player> players);
    void setCards(vector<Card> cards);

    void updateTable();

    void updatePlayersPosition();

    void showCard(int cardId);

private:
    Ui::MainWindow *ui;


    int selectedCard = 0;

    Game gameEngine;

    vector<QPushButton*> cards;

    vector<QLabel*> players;

private slots:
    void roll();
    void card1();
    void card2();
    void card3();
    void card4();
    void card5();
    void card6();
    void card7();
    void card8();
    void card9();
    void card10();
    void card11();
    void card12();
    void card13();
    void card14();
    void card15();
    void card16();
    void card17();
    void card18();
    void card19();
    void card20();
    void card21();
    void card22();
    void card23();
    void card24();
    void card25();
    void card26();
    void card27();
    void card28();
    void updateCard();

    void sell();
    void buyAgain();

};
#endif // MAINWINDOW_H
