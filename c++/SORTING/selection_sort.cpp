// SORTING OF ARRAY
#include<iostream>
using namespace std; 
void sortElement(int arr[], int size)
{
    int minIndex,i;
    for(int i=0; i<size-1; i++)
    {
        minIndex=i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
    cout<<"Array after sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int key;
    int arr[6]={1,109,45,60,23,9};
    
    sortElement(arr, 6);
}