#pragma once
#include "common.hpp"
class Spot;
class Board;

class Piece {
private:
    bool killed = false;
    bool white = false;
    bool isWhitePiece = true;
    bool isPieceKilled = false;

public:
    Piece(bool white);
    bool isWhite();
    void setWhite(bool white);
    bool isKilled();
    void setKilled(bool killed);
    virtual bool canMove(Board* board, Spot* start, Spot* end) = 0;
    virtual string getSymbol() = 0;
    virtual void move(Board* board, Spot* start, Spot* end) = 0;

};

