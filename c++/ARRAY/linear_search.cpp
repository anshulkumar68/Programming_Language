#include<iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[100], size, key;
    cout<<"enter size of array: ";
    cin>>size;
    cout<<"enter elements in array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element for search: ";
    cin>>key;
    bool found = search(arr, size, key);
    if(found)
    {
        cout<<"Key is present";
    }
    else
    {
        cout<<"Key is absent";
    }
    return 0;
}