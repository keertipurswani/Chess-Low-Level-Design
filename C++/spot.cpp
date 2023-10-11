#include "spot.hpp"

Spot::Spot(int x, int y, Piece* piece) : x(x), y(y), piece(piece) {}

Piece* Spot::getPiece() {
    return piece;
}

void Spot::setPiece(Piece* p) {
    piece = p;
}

int Spot::getX() {
    return x;
}

void Spot::setX(int x) {
    this->x = x;
}

int Spot::getY() {
    return y;
}

void Spot::setY(int y) {
    this->y = y;
}
