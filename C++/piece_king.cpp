#include "piece_king.hpp"
#include "spot.hpp"

King::King(bool white) : Piece(white) {}

bool King::isCastlingDone() {
    return castlingDone;
}

void King::setCastlingDone(bool castlingDone) {
    this->castlingDone = castlingDone;
}

bool King::canMove(Board* board, Spot* start, Spot* end) {
    if (end->getPiece() && end->getPiece()->isWhite() == isWhite()) {
        return false;
    }

    int x = abs(start->getX() - end->getX());
    int y = abs(start->getY() - end->getY());

    if (x + y == 1) {
        return true;
    }

    return isValidCastling(board, start, end);
}

void King::move(Board* board, Spot* start, Spot* end) {
    // Implement the logic to move the piece
}

bool King::isValidCastling(Board* board, Spot* start, Spot* end) {
    if (isCastlingDone()) {
        return false;
    }
    return true;
    // Add logic for castling validity
}

bool King::isCastlingMove(Spot* start, Spot* end) {
    return true;
    // Check if it's a castling move
}

string King::getSymbol() {
    return "KING";
}