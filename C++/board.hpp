#pragma once
#include "spot.hpp"
#include "piece_rook.hpp"
#include "piece_pawn.hpp"
#include "piece_knight.hpp"
#include "piece_king.hpp"
#include "piece_bishop.hpp"
#include "piece_queen.hpp"
#include "iomanip"

class Board {
private:
    Spot* boxes[8][8];

public:
    Board();
    Spot* getSpot(int x, int y);
    void displayBoard();
    void resetBoard();
};
