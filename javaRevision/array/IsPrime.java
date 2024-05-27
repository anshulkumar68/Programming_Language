package array;

public class IsPrime {
    public static void main(String[] args) {
        boolean res = prime(53);
        if (res == false)
            System.out.println("Not a prime");
        else
            System.out.println("Prime number");
    }

    static boolean prime(int num) {
        // boolean isPrime;
        for (int i = 2; i <= num;) {
            if (num % i == 0)
                return false;
            break;
        }
        return true;
    }
}
