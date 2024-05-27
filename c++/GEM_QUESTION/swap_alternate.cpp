// for exchange the elements with there adjacent element
#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout<<"array after alternate: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void alternate(int arr[], int size)
{
    for(int i=0; i<size; i=i+2)
    {
        if(i+1<size)
        {
        swap(arr[i], arr[i+1]);
        }
    }
    cout<<endl;
}
int main() {
    int arr[100], size, i;
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter elements in array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    
    alternate(arr, size);
    printArray(arr,size);
    
    return 0;
}