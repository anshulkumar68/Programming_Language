// Given an array array/list 'ARR'  of integers and a position 'M'. You have to reverse the array after that position.
#include<iostream>
using namespace std;
void reverse_array(int arr[], int size)
{
    //s means starting index of array
    //e means last index of array
    int m=2; 
    int start=m+1;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size)
{
    cout<<"after reverse:"<<endl;
   for(int i=0; i<size; i++)
    { 
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[100], size;
    cout<<"enter size of array: ";
    cin>>size;
    cout<<"enter elements in array: "<<endl;
    for(int i=0; i<size; i++)
        cin>>arr[i];
    cout<<endl;
    reverse_array(arr, size);
    printArray(arr, size);
    
    return 0;
}