#include<iostream>
using namespace std;
int merge(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i, j , k;
    for(int i=0; i<size1; i++)
    {
        for(int j=0; j<size2; j++)
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
    }
    // copying first array1 in array3
    for(int i=0; i<size1; i++)
    {
        arr3[k++]=arr1[i++];
    }
    // copying first array2 in array3
    for(int j=0; j<size2; i++)
    {
        arr3[k++]=arr1[j++];
    }
}
void printArray(int arr3[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr3[i]<<" ";
    }
}
int main()
{
    int arr1[5]={1, 3, 5, 7, 9};
    int arr2[4]={2, 4, 6, 8};
    int arr3[9]={0};
    merge(arr1, 5, arr2, 4, arr3);
    printArray(arr3, 9);
    return 0;
}