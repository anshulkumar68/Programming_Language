// FIRST AND LAST OCCURENCE OF A NUMBER
#include<iostream>
using namespace std;
int firstOccurence(int arr[], int size, int key)
{
    int start=0, end=size-1, first=0;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            first=mid;
            end=mid-1;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        if(key<arr[mid])
        {
            end=mid-1;
        }
    mid=start+(end-start)/2;        
    }
    return first;
}
int lastOccurence(int arr[], int size, int key)
{
    int start=0, end=size-1, last=0;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            last=mid;
            start=mid+1;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        if(key<arr[mid])
        {
            end=mid-1;
        }
    mid=start+(end-start)/2;        
    }
    return last;
}
int main()
{
    int key;
    int arr[7]={0,1,2,2,2,2,2};
    int first=firstOccurence(arr, 7, 2);
    int last=lastOccurence(arr, 7, 2);
    
    cout<<"First occurence for 2: "<<first<<endl;
    cout<<"Last occurence for 2: "<<last;
}