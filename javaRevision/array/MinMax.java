package array;

public class MinMax {
    public static void main(String[] args) {
        int[] arr = { 89, 123, 13, 8, 179, 2169, 130 };
        System.out.println("Minimum number :" + mini(arr));
        System.out.println("Maximum number :" + maxi(arr));
    }

    static int mini(int[] arr){
        int min=Integer.MAX_VALUE;
        for(int i=0; i<arr.length; i++){
            if(min>arr[i])
                min= arr[i];
        }
        return min;
    }

    static int maxi(int[] arr){
        int max = Integer.MIN_VALUE; 
        for(int i=0; i<arr.length; i++){
            if(max<arr[i])
                max= arr[i];
        }
        return max;
    }
}
