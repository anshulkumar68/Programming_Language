#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// function for finding minimum value in array
int min(int arr[], int size)
{
    int minIndex = arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]<minIndex)
        {    
            minIndex = arr[i];
        }
    }
    return minIndex;
}
int minInd(int arr[], int size)
{
    int minIndex = arr[0], index=-1;
    for(int i=0; i< size; i++)
    {
        if(arr[i]<minIndex)
        {   
            index =i;
        }
    }
    return index;
}
// function for finding maximum  value in array
int max(int arr[], int size)
{
    int maxIndex = arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]>maxIndex)
        {    
            maxIndex = arr[i];
        }
    }
    return maxIndex;
}
int maxInd(int arr[], int size)
{
    int maxIndex = arr[0], index1=-1;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>maxIndex)
        {   
            index1 =i;
        }
    }
    return index1;
}
int main()
{
    int arr[100], size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter array elements: ";
    for(int i=0; i<size; i++)
        cin>>arr[i];
    int minvalue= min(arr, size);
    int index = minInd(arr, size);
    cout<<"Minimum value "<<minvalue<<" at index: "<<index<<endl;
    int maxvalue= max(arr, size);
    int index1 = maxInd(arr, size);
    cout<<"Maximum value "<<maxvalue<<" at index: "<<index1;
    return 0;
}
