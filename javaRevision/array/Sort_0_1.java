package array;

public class Sort_0_1 {
    public static void main(String[] args) {
        int[] arr = { 1, 0, 0, 1, 1, 0, 1, 1, 0 };
        sort(arr);
    }

    public static void sort(int[] arr) {
        int left = 0, right = arr.length - 1;
        while (left < right) {
            // check left for 0
            while(arr[left] == 0 && left<right)
                left++;
            // check right for 1
            while(arr[right] == 1 && left<right)
                right--;

            if(arr[left]==1 && arr[right]==0 && left<right){
                arr[left++] = 0;
                arr[right--] = 1;
            }
        }
        for (int i : arr)
            System.out.print(i + " ");
    }
}
