#pragma once
#include "piece.hpp"

class Knight : public Piece {
public:
    Knight(bool white);
    bool canMove(Board* board, Spot* start, Spot* end) override;
    void move(Board* board, Spot* start, Spot* end) override;
    string getSymbol();
};

