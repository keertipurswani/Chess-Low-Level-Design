#pragma once
#include "piece.hpp"

class King : public Piece {
private:
    bool castlingDone = false;

public:
    King(bool white);
    bool isCastlingDone();
    void setCastlingDone(bool castlingDone);
    bool canMove(Board* board, Spot* start, Spot* end) override;
    void move(Board* board, Spot* start, Spot* end) override;
    bool isValidCastling(Board* board, Spot* start, Spot* end);
    bool isCastlingMove(Spot* start, Spot* end);
    string getSymbol();
};

