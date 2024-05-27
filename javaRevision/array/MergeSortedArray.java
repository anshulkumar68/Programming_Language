package array;

public class MergeSortedArray {
    public static void main(String[] args) {
        int[] arr1 = { 1, 3, 9, 22, 79, 84 };
        int[] arr2 = { 5, 7, 19, 87 };
        merge(arr1, arr2);
    }

    public static void merge(int[] arr1, int[] arr2) {
        int[] arr3 =new int[arr1.length + arr2.length];
        int i = 0, j = 0, k = 0;
        while (i < arr1.length && j < arr2.length) {
            if (arr1[i] < arr2[j]) {
                arr3[k++] = arr1[i++];
            } else {
                arr3[k++] = arr2[j++];
            }
        }
        // copy remaining elements of arr1
        while (i < arr1.length) {
            arr3[k++] = arr1[i++];
        }

        // copy remaining elements of arr2
        while (j < arr2.length) {
            arr3[k++] = arr2[j++];
        }

        // print merged array
        for (int ele : arr3) {
            System.out.print(ele + " ");
        }
    }

}
