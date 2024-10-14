import java.util.Scanner;

public class lassan {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        for (int i = 1; i < 10; i++) {
            int a = sc.nextInt();
            if (a % 10 != 0) {
                continue;
            }
            System.out.println("Congratulation you won the GAme after score "+i);
        }
    }
}