// Given an array, rotate the array to the right by k steps, where k is non-negative.
#include<iostream>
using namespace std;
void rotate(int nums[], int size, int k)
{
    int temp[size]; 
    for(int i=0; i<size; i++)
    {
        temp[(i+k)%size]=arr[i];
    }
    arr = temp;
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
    vector<int> nums{ 10, 20, 30 };
    cout<<"enter steps after which you want to rotate:";
    cin>>k;
    rotate(nums, 6, k);
    printArray(arr, 6);
}