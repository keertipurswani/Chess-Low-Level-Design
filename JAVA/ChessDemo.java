import java.util.*;

public class ChessDemo {
    public static void main(String[] args) {
        Player player1 = new Player("keerti", true);
        Player player2 = new Player("amit", false);

        Game game = new Game(player1, player2);
        Player currPlayer = player1;

        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Please enter start spot:");
            String start = scanner.next();
            if (start.equals("q")) {
                System.out.println("GAME OVER");
                System.out.println("-----------------------------------------------");
                break;
            } else if (start.equals("u")) {
                game.undo();
                continue;
            }

            System.out.println("Please enter end spot:");
            String end = scanner.next();
            if (end.equals("q")) {
                System.out.println("GAME OVER");
                System.out.println("-----------------------------------------------");
                break;
            }

            if (game.processMove(player1, start, end)) {
                if (currPlayer == player1)
                    currPlayer = player2;
                else
                    currPlayer = player1;
                System.out.println("It is " + currPlayer.getName() + "'s turn now");
            }
        }
    }
}
