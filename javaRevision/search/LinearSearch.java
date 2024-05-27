package search;

public class LinearSearch {
    public static void main(String[] args) {
        int[] arr = { 5, 80, 24, 1, 12, 98, 6, 789, 242, 1786, 282 };
        int index = search(arr, 6);

        if (index != -1)
            System.out.println("Number found at " + index + " location");
        else
            System.out.println("Number not found!");
    }

    static int search(int[] arr, int key) {
        // loop for traversal through array
        for (int i = 0; i < arr.length; i++) {
            if (key == arr[i]) {
                return i;
            }
        }
        return -1;
    }

}