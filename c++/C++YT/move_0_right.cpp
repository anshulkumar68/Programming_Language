#include<iostream>
using namespace std;
void move(int arr[], int size)
{
    int i=0; 
    for(int j=0; j<size; j++)
    {
        if(arr[j]!=0)
        {   swap(arr[j],arr[i]);
            i++;
        }    
    }
}
void printArray(int ans[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int arr[8]={23, 0, 34, 0, 0, 7, 56, 0};
    move(arr, 8);
    printArray(arr, 8);
}