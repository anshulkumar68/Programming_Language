package search;
public class LinearSearch 
{
    static int search(int[] arr, int size, int key)
    {
        for(int i=0; i<size; i++)
        {
            if(arr[i]==key)
                return i;    
        }
        return -1;
    }
    public static void main(String[] args)
    {
        int[] arr={37, 22, 208, 34, 20};
        int size = arr.length;

        int key=208;
        
        int index= search(arr, size, key);
        if(index==-1)
            System.out.println("Not found!!");
        else
            System.out.println("Value found at position: "+index);
    }
}










