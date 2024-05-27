#include<iostream>
using namespace std;
void sort(int arr[],  int size)
{
    int left=0, right=size-1;
    while(left<right)
    {
        while(arr[left]==0 && left<right)
        {
            left++;
        }
        while(arr[right]==1 && left<right)
        {
            right--;
        }
        while(arr[left]==1 && arr[right]==0 && left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
void print(int arr[], int size)
{
    cout<<"array after sort: "<<endl;
    for(int i=0; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100], size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"Enter elements: ";
    for(int i=0; i<size; i++)  
        cin>>arr[i];

    sort(arr, size);
    print(arr, size);

    return 0;
}
