#pragma once
#include "piece.hpp"

class Bishop : public Piece {
public:
    Bishop(bool white);
    bool canMove(Board* board, Spot* start, Spot* end) override;
    void move(Board* board, Spot* start, Spot* end) override;
    string getSymbol();
};
