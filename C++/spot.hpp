#pragma once
#include "piece.hpp"

class Spot {
private:
    Piece* piece;
    int x;
    int y;

public:
    Spot(int x, int y, Piece* piece);
    Piece* getPiece();
    void setPiece(Piece* p);
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
};

