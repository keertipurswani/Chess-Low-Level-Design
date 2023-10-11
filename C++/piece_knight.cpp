#include "piece_knight.hpp"
#include "spot.hpp"

Knight::Knight(bool white) : Piece(white) {}

bool Knight::canMove(Board* board, Spot* start, Spot* end) {
    if (end->getPiece() && end->getPiece()->isWhite() == isWhite()) {
        return false;
    }

    int x = abs(start->getX() - end->getX());
    int y = abs(start->getY() - end->getY());
    return x * y == 2;
}

void Knight::move(Board* board, Spot* start, Spot* end) {
    // Implement the logic to move the piece
}

string Knight::getSymbol() {
    return "KNIGHT";
}
