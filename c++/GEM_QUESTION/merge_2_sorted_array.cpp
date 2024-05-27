#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i=0, j=0 , k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
                arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }    
    }
     // copying first array1 in array3
    while(i<n)
    {
        arr3[k++]=arr1[i++];
    }
    // copying first array2 in array3
    while(j<m)
    {
        arr3[k++]=arr2[j++];
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
    int arr1[3]={1, 8, 16};
    int arr2[4]={2, 4, 6, 23};
    int arr3[7]={0};
    merge(arr1, 3, arr2, 4, arr3);
    printArray(arr3, 7);
    return 0;
}