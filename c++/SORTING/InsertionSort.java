// Insertion sort work in two part first half sorted array other part unsorted array
// In insertion sort we assume first element as sorted then we compare each element from unsorted array with sorted array 

public class InsertionSort 
{
    static void printarr(int[] arr)
    {
        System.out.println("Sorted array is");
        for(int i=0; i<arr.length; i++)
            System.out.print(arr[i]+" ");
    }    

    public static void main(String[] args) 
    {
        int[] arr = {6, 9, 1, 7, 3};
        // for accessing all element running from 1 coz we assumed first element is sorted array
        for(int i=1; i<arr.length; i++){
            int current = arr[i];
            int j=i-1;      
            // j loop for sorted array which is previous index of unsorted array
            while(j >= 0 && current < arr[j]){
                arr[j+1] = arr[j];
                j--;
            }
            // Placement of element
            arr[j+1] = current;
        }
        printarr(arr);
    }
}

