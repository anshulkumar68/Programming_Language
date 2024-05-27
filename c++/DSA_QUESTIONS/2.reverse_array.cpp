#include<iostream>
using namespace std;
void reverse(int arr[], int size)
{
    //s means starting point of array
    // e means ending point of array 
    int s=0, e=size-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<"reverse array: ";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[100], size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter elements in array: ";
    for(int i=0; i<size; i++)
        cin>>arr[i];
    reverse(arr,size);
}