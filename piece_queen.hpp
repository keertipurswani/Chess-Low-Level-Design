#pragma once
#include "piece.hpp"

class Queen : public Piece {
public:
    Queen(bool white);
    bool canMove(Board* board, Spot* start, Spot* end) override;
    void move(Board* board, Spot* start, Spot* end) override;
    string getSymbol();
};

