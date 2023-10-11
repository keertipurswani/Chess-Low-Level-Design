#include "piece.hpp"
#include "spot.hpp"

Piece::Piece(bool white) : isWhitePiece(white) {
    isPieceKilled = false;
}

bool Piece::isWhite() {
    return isWhitePiece;
}

void Piece::setWhite(bool pIswhite) {
    isWhitePiece = pIswhite;
}

bool Piece::isKilled() {
    return isPieceKilled;
}

void Piece::setKilled(bool killed) {
    this->isPieceKilled = killed;
}
