import java.util.ArrayList;
import java.util.List;

public class Game {
    private Player[] players = new Player[2];
    private Board board;
    private Player currentPlayer;
    private GameStatus status;
    private List<Move> movesPlayed = new ArrayList<>();
    private int currMoveIndex;

    public Game(Player p1, Player p2) {
        players[0] = p1;
        players[1] = p2;
        status = GameStatus.ACTIVE;
        board = new Board();
        board.resetBoard();
        board.displayBoard();
        currMoveIndex = 0;
    }

    public void displayGameBoard() {
        board.displayBoard();
    }

    public List<Integer> getSpotPosition(String spot) {
        int spotRow = 8 - (spot.charAt(0) - '0');
        int spotCol = spot.charAt(1) - 'a';
        List<Integer> position = new ArrayList<>();
        position.add(spotRow);
        position.add(spotCol);
        return position;
    }

    public boolean processMove(Player currPlayer, String start, String end) {
        List<Integer> startMove = getSpotPosition(start);
        List<Integer> endMove = getSpotPosition(end);

        Spot startSpot = board.getSpot(startMove.get(0), startMove.get(1));
        Spot endSpot = board.getSpot(endMove.get(0), endMove.get(1));
        Piece currPiece = startSpot.getPiece();

        Move move = new Move(currPlayer, startSpot, endSpot, currPiece);

        if (currPiece.canMove(board, startSpot, endSpot)) {
            currPiece.move(board, startSpot, endSpot);
            endSpot.setPiece(currPiece);
            startSpot.setPiece(null);
            currMoveIndex++;
        } else {
            move.setInvalidMove();
        }

        movesPlayed.add(move);

        board.displayBoard();
        return true;
    }

    public void undo() {
        currMoveIndex--;
        Move lastMove = movesPlayed.get(currMoveIndex);
        if (lastMove != null) {
            lastMove.getPieceMoved().move(board, lastMove.getEndSpot(), lastMove.getStartSpot());
            lastMove.getStartSpot().setPiece(lastMove.getPieceMoved());
            lastMove.getEndSpot().setPiece(lastMove.getPieceKilled());
            board.displayBoard();
        }
    }

    public void redo() {
        //Perform redo just like undo
        currMoveIndex++;
    }
}
