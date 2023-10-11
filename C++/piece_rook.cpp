#include "piece_rook.hpp"

Rook::Rook(bool white) : Piece(white) {}

bool Rook::canMove(Board* board, Spot* start, Spot* end) {
    // Implement the logic to check if a rook can move from 'start' to 'end'
    // Consider the horizontal and vertical movement rules
    // Return true if the move is valid, false otherwise
    return true; // Replace with your logic
}

void Rook::move(Board* board, Spot* start, Spot* end) {
    // Implement the logic to move the piece
}

string Rook::getSymbol() {
    return "ROOK";
}