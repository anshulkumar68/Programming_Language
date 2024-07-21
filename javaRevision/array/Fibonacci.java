package array;

public class Fibonacci {
    public static void main(String[] args) {
        fib(10);
    }

    static void fib(int num) {
        int a = 0, b = 1, c=1;
        for (int i = 0; i < num; i++) {
            System.out.print(a+ " ");
            a = b;
            b = c;
            c = a + b;
        }
    }
}
