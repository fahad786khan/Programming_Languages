import java.util.Scanner;

public class Last {
    public static void main(String[] args) {
        Scanner num = new Scanner(System.in);
        int num2 = fact(num);
        System.out.println(num);
    }

    void fact(int num) {
        int fact = 1;
        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }

        return fact;
    }
}
