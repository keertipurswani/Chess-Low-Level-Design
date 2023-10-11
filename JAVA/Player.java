
public class Player {
    private boolean humanPlayer;
    private String name;
    private boolean isCurrPlayer;
    private boolean isWhite;

    public Player(String pName, boolean pIsWhite) {
        name = pName;
        isWhite = pIsWhite;
        humanPlayer = true;
    }

    public String getName() {
        return name;
    }

    public boolean isWhiteSide() {
        return isWhite;
    }

    public boolean isHumanPlayer() {
        return humanPlayer;
    }
}

