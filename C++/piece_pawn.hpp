#pragma once
#include "piece.hpp"

class Pawn : public Piece {
public:
    Pawn(bool white);
    bool canMove(Board* board, Spot* start, Spot* end) override;
    void move(Board* board, Spot* start, Spot* end) override;
    string getSymbol();
};
