#pragma once
class Player;
class Spot;
class Piece;

class Move {
private:
    Player* player;
    Spot* start;
    Spot* end;
    Piece* pieceMoved;
    Piece* pieceKilled;
    bool castlingMove = false;
    bool isValidMove;

public:
    Move(Player* pPlayer, Spot* pStartSpot, Spot* pEndSpot, Piece* piece) : 
        player(pPlayer), start(pStartSpot), end(pEndSpot), pieceMoved(piece) {
            pieceKilled = nullptr;
        }
    bool isCastlingMove();
    void setCastlingMove(bool castlingMove);
    void setInvalidMove() {
        isValidMove = false;
    }
    Player* getPlayer() {
        return player;
    }
    Spot* getStartSpot() {
        return start;
    }
    Spot* getEndSpot() {
        return end;
    }
    Piece* getPieceMoved() {
        return pieceMoved;
    }
    Piece* getPieceKilled() {
        return pieceKilled;
    }
};

