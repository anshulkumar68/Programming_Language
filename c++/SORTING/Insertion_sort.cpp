#include <iostream>
using namespace std;
void insertionsort(int arr[], int size)
{   
    int i=1;
    while(i<size)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0)
        {
            if(arr[j]>temp)
            {   
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        i++;
    arr[j+1]=temp;    
    }
    cout<<"Array after sorting: ";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[100], size;
    cout<<"enter size of array: ";
    cin>>size;
    for(int i=0; i<size; i++)
        cin>>arr[i];
        
    insertionsort(arr, size);
    return 0;
}