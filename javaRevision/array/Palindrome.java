package array;

public class Palindrome {
    public static void main(String[] args) {
        palindrome(5867685);
    }

    static void palindrome(int num) {
        int rem, rev = 0, temp = num;
        while (num > 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        System.out.println(rev);
        if (temp == rev)
            System.out.println("Palindrome");
        else
            System.out.println("Not a palindrome");
    }
}
