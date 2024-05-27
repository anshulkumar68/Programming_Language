// SORT THE ARRAY THROUGH BUBBLE SORT

#include<iostream>
using namespace std;
void bubble_sort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<"Array after sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100], size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"enter array element: ";
    for(int i=0; i<size; i++)
        cin>>arr[i];

    bubble_sort(arr, size);
}