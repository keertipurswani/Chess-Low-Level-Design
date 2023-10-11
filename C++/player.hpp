#pragma once
#include "common.hpp"

class Player {
    bool humanPlayer;
    string name;
    bool isCurrPlayer;

public:
    Player(string pName, bool pIsWhite) : name(pName) , isWhite(pIsWhite) {
        humanPlayer = true;
    }
    string getName() {
        return name;
    }
    bool isWhite;
    bool isWhiteSide();
    bool isHumanPlayer();
};

class HumanPlayer : public Player {
public:
    HumanPlayer(bool whiteSide);
};

class ComputerPlayer : public Player {
public:
    ComputerPlayer(bool whiteSide);
};