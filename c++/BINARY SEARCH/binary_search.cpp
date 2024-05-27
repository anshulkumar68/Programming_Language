#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start=0,end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        if(key<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int key,arr[100],size;
    // int evenarr[6]= {18,23,35,48,61,74};
    // int oddarr[7]= {17,24,34,49,60,75,79};
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter array in ascending order: "<<endl;
    for(int i=0; i<size; i++)
        cin>>arr[i];
    cout<<"Enter key element: ";
    cin>>key;
    int index = binarySearch(arr,size, key);
    cout<<index<<" ";
    // int index = binarySearch(evenarr, 6, 35);
    // cout<<"Index of 100 element in even array is: "<<index<<endl; 
    
    // index = binarySearch(oddarr, 7, 79);
    // cout<<"Index of 101 element in odd array is: "<<index<<endl;
   
    return 0;
}