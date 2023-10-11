#include "common.hpp"
#include "board.hpp"
#include "spot.hpp"
#include "piece.hpp"
#include "piece_pawn.hpp"
#include "piece_bishop.hpp"
#include "piece_rook.hpp"
#include "player.hpp"
#include "game.hpp"

//Command Pattern to store history, undo, redo
//Different chess games according to timings
//Rankings
//Player Matching Strategy
//Online Tournaments - types of tournaments - Factory
//Game Controller
//Login, Payment, Notifications, Logging - general requirements of systems

int main() {

    Player* player1 = new Player("keerti", true);
    Player* player2 = new Player("amit", false);

    Game* game = new Game(player1, player2);
    Player* currPlayer = player1;

    while(1) {
        string start, end;
        cout<<"Please enter start spot"<<endl;
        cin>>start;
        if(start == "q") {
            cout<<"GAME OVER"<<endl;
            cout<<"-----------------------------------------------"<<endl;
            break;
        }
        else if(start == "u") {
            game->undo();
            continue;
        }
        cout<<"Please enter end spot"<<endl;
        cin>>end;
        if(end == "q") {
            cout<<"GAME OVER"<<endl;
            cout<<"-----------------------------------------------"<<endl;
            break;
        }
        if(game->processMove(player1, start, end))
        {
            if(currPlayer == player1)
                currPlayer = player2;
            else currPlayer = player1;
            cout<<"It is "<<currPlayer->getName()<<"'s turn now"<<endl;
        }
    }

    return 0;
}