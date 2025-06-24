import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        // Reading from system.in
        System.out.println("Enter a number:");
        int n = reader.nextInt();// Scans the next token of the input as an int
        // Once finished
        reader.close();
    }
}