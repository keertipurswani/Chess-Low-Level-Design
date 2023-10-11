#include "game.hpp"

Game::Game(Player *p1, Player *p2)
{
    players[0] = p1;
    players[1] = p2;
    status = GAME_STATUS::ACTIVE;
    board = new Board();
    board->resetBoard();
    board->displayBoard();
    currMoveIndex = 0;
}

void Game::displayGameBoard()
{
    board->displayBoard();
}

pair<int, int> Game::getSpotPosition(string spot)
{
    int spotRow = 8 - (spot[0] - '0');
    int spotCol = spot[1] - 'a';
    return make_pair(spotRow, spotCol);
}

bool Game::processMove(Player *currPlayer, string start, string end)
{
    pair<int, int> startmove = getSpotPosition(start);
    pair<int, int> endmove = getSpotPosition(end);

    Spot *startSpot = board->getSpot(startmove.first, startmove.second);
    Spot *endSpot = board->getSpot(endmove.first, endmove.second);
    Piece *currPiece = startSpot->getPiece();

    Move *move = new Move(currPlayer, startSpot, endSpot, currPiece);

    if (currPiece->canMove(board, startSpot, endSpot))
    {
        currPiece->move(board, startSpot, endSpot);
        board->getSpot(endmove.first, endmove.second)->setPiece(currPiece);
        board->getSpot(startmove.first, startmove.second)->setPiece(nullptr);
        currMoveIndex++;
    }
    else
    {
        move->setInvalidMove();
    }

    movesPlayed.push_back(move);

    board->displayBoard();
    return true;
}

void Game::undo()
{
    currMoveIndex--;
    Move *lastMove = movesPlayed[currMoveIndex];
    if (lastMove)
    {
        lastMove->getPieceMoved()->move(board, lastMove->getEndSpot(), lastMove->getStartSpot());
        lastMove->getStartSpot()->setPiece(lastMove->getPieceMoved());
        lastMove->getEndSpot()->setPiece(lastMove->getPieceKilled());
        board->displayBoard();
    }
}

void Game::redo()
{
    //Perform redo just like undo
    currMoveIndex++;
}
