#include "board.hpp"

Board::Board() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            boxes[i][j] = nullptr;
        }
    }
    resetBoard();
}

Spot* Board::getSpot(int row, int col) {
    if (row < 0 || row >= 8 || col < 0 || col >= 8) {
        // You can throw an exception here or handle the error in your preferred way
        // For simplicity, let's print an error message
        cerr << "Error: Index out of bounds" << endl;
        return nullptr;
    }

    return boxes[row][col];
}

void Board::resetBoard() {

    // Initialize white pieces
    boxes[0][0] = new Spot(0, 0, new Rook(true));
    boxes[0][1] = new Spot(0, 1, new Knight(true));
    boxes[0][2] = new Spot(0, 2, new Bishop(true));
    boxes[0][3] = new Spot(0, 3, new Queen(true));
    boxes[0][4] = new Spot(0, 4, new King(true));
    boxes[0][5] = new Spot(0, 5, new Bishop(true));
    boxes[0][6] = new Spot(0, 6, new Knight(true));
    boxes[0][7] = new Spot(0, 7, new Rook(true));

    for (int i = 0; i < 8; i++) {
        boxes[1][i] = new Spot(1, i, new Pawn(true));
    }

    // Initialize black pieces
    boxes[7][0] = new Spot(7, 0, new Rook(false));
    boxes[7][1] = new Spot(7, 1, new Knight(false));
    boxes[7][2] = new Spot(7, 2, new Bishop(false));
    boxes[7][3] = new Spot(7, 3, new Queen(false));
    boxes[7][4] = new Spot(7, 4, new King(false));
    boxes[7][5] = new Spot(7, 5, new Bishop(false));
    boxes[7][6] = new Spot(7, 6, new Knight(false));
    boxes[7][7] = new Spot(7, 7, new Rook(false));

    for (int i = 0; i < 8; i++) {
        boxes[6][i] = new Spot(6, i, new Pawn(false));
    }

    // Initialize remaining boxes without any piece
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            boxes[i][j] = new Spot(i, j, nullptr);
        }
    }
}

void Board::displayBoard() {
    cout<<setw(12)<<"";
    for(char ch = 'a'; ch <= 'h'; ch++)
        cout<<setw(12)<<ch;
    cout<<endl;
    for (int i = 0; i < 8; i++) {
        cout<< setw(12) << 8-i;
        for (int j = 0; j < 8; j++) {
            Spot* spot = getSpot(i, j);
            if (spot->getPiece()) {
                string symbol = ""; 
                if (spot->getPiece()->isWhite()) {
                    symbol = "WHITE" + spot->getPiece()->getSymbol();
                } else {
                    symbol = "BLACK" + spot->getPiece()->getSymbol();
                }
                cout << setw(12) <<symbol;
            } else {
                cout << setw(12) << ".";
            }
        }
        cout<< setw(12) << 8-i;
        cout << endl;
    }
    cout<<setw(12)<<"";
    for(char ch = 'a'; ch <= 'h'; ch++)
        cout<<setw(12)<<ch;
    cout<<endl;
    cout << endl;
}
