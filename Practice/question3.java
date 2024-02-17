
//Mahasena question
import java.util.Scanner;

public class question3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextInt();
        }
        scanner.close();
        int count_even = 0;
        int count_odd = 0;
        for (int i = 0; i < N; i++) {

            if (A[i] % 2 == 0) {
                count_even = count_even + 1;
            } else {
                count_odd = count_even + 1;
            }
        }
        if (count_even > count_odd) {
            System.out.println("READY FOR BATTLE");
        } else {
            System.out.println("NOT READY");
        }
    }
}