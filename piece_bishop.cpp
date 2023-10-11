#include "piece_bishop.hpp"
#include "spot.hpp"

Bishop::Bishop(bool white) : Piece(white) {}

bool Bishop::canMove(Board* board, Spot* start, Spot* end) {
    // Implement the logic to check if a bishop can move from 'start' to 'end'
    // Consider the diagonal movement rules
    // Return true if the move is valid, false otherwise
    return true; // Replace with your logic
}

void Bishop::move(Board* board, Spot* start, Spot* end) {
    // Implement the logic to move the piece
}

string Bishop::getSymbol() {
    return "BISHOP";
}
