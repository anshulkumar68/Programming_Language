// FIND PEAK ELEMENT IN A MOUNTAIN
#include<iostream>
using namespace std;
int peakElement(int arr[], int size)
{
    int s=0,e=size-1,mid=s+(e-s)/2; 
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
           e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[s];
}
int main()
{
    int key;
    int arr[6]={1,9,45,60,23,9};
    
    int element=peakElement(arr, 6);
    cout<<"No of occurence of given number: "<<element;
}