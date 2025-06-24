import java.util.Scanner;

public class ReadConsoleScanner {
    public static void main(String[] args) {
        System.out.println("Enter something here");

        String sWhatever;
        Scanner scanln = new Scanner(System.in);
        sWhatever = scanln.nextLine();

        scanln.close();
        System.out.println(sWhatever);
    }
}
