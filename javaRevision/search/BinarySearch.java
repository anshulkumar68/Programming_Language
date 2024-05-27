package search;

public class BinarySearch {
    public static void main(String[] args) {
        int[] arr = { 24, 35, 45, 89, 134, 890, 1234, 2448 };
        int res = search(arr, 89);
        if (res != -1) {
            System.out.println("Element found at index: " + res);
        } else {
            System.out.println("Element not found in the array.");
        }
    }

    public static int search(int[] arr, int target) {
        int s = 0, e = arr.length - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            // check if target is present at mid
            if (arr[mid] == target) {
                return mid;
            }

            // if target greater, ignore left half
            if (arr[mid] < target)
                s = mid + 1;

            // If target is smaller, ignore right half
            else
                e = mid - 1;
        }
        return -1;
    }
}
