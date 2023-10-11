#include "piece_pawn.hpp"
#include "spot.hpp"

Pawn::Pawn(bool white) : Piece(white) {}

bool Pawn::canMove(Board* board, Spot* start, Spot* end) {
    // Implement the logic to check if a pawn can move from 'start' to 'end'
    // Consider the rules for pawn movement, captures, and promotion
    // Return true if the move is valid, false otherwise
    return true; // Replace with your logic
}

void Pawn::move(Board* board, Spot* start, Spot* end) {
    // Implement the logic to move the piece
}

string Pawn::getSymbol() {
    return "PAWN";
}
