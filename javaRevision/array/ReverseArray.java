package array;

public class ReverseArray {
    public static void main(String[] args) {
        int[] arr = {48, 8, 89, 179, 45, 56, 612};
        reverse(arr);
    }

    static void reverse(int[] arr){
        int s = 0, e = arr.length-1;
        while(s<=e){
            int temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            s++;
            e--;
        }
        for(int i : arr)
            System.out.print(i+" ");
    }
}
