#include "piece_queen.hpp"

Queen::Queen(bool white) : Piece(white) {}

bool Queen::canMove(Board* board, Spot* start, Spot* end) {
    // Implement the logic to check if a queen can move from 'start' to 'end'
    // Return true if the move is valid, false otherwise
    return true; // Replace with your logic
}

void Queen::move(Board* board, Spot* start, Spot* end) {
    // Implement the logic to move the piece
}

string Queen::getSymbol() {
    return "QUEEN";
}