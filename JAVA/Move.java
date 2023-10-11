
public class Move {
    private Player player;
    private Spot start;
    private Spot end;
    private Piece pieceMoved;
    private Piece pieceKilled;
    private boolean castlingMove = false;
    private boolean isValidMove;

    public Move(Player pPlayer, Spot pStartSpot, Spot pEndSpot, Piece piece) {
        player = pPlayer;
        start = pStartSpot;
        end = pEndSpot;
        pieceMoved = piece;
        pieceKilled = null;
    }

    public boolean isCastlingMove() {
        return castlingMove;
    }

    public void setCastlingMove(boolean castlingMove) {
        this.castlingMove = castlingMove;
    }

    public void setInvalidMove() {
        isValidMove = false;
    }

    public Player getPlayer() {
        return player;
    }

    public Spot getStartSpot() {
        return start;
    }

    public Spot getEndSpot() {
        return end;
    }

    public Piece getPieceMoved() {
        return pieceMoved;
    }

    public Piece getPieceKilled() {
        return pieceKilled;
    }
}
