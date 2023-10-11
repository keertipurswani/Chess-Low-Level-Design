#pragma once
#include "player.hpp"
#include "board.hpp"
#include "move.hpp"
#include "common.hpp"


class Game {
private:
    Player* players[2];
    Board* board;
    Player* currentPlayer;
    GAME_STATUS status;
    vector<Move*> movesPlayed;
    int currMoveIndex;

    void initialize(Player* p1, Player* p2);

public:
    Game(Player *p1, Player *p2);
    void displayGameBoard();
    pair<int,int> getSpotPosition(string spot);
    bool processMove(Player *currPlayer, string start, string end);
    void undo();
    void redo();
    bool isEnd();
    GAME_STATUS getStatus();
    void setStatus(GAME_STATUS status);
    bool playerMove(Player* player, int startX, int startY, int endX, int endY);
    bool makeMove(Move* move, Player* player);
};

