#pragma once
#include "piece.hpp"

class Rook : public Piece {
public:
    Rook(bool white);
    bool canMove(Board* board, Spot* start, Spot* end) override;
    void move(Board* board, Spot* start, Spot* end) override;
    string getSymbol();
};

