#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMinDiff(int arr[], int size, int m)
{
    int ans = INT_MAX;
    sort(arr, arr+size);
    for(int i=0; i<size-m; i++)
    {
        int min = arr[0];
        int max = arr[i+m-1];
        int gap = max-min;
        if(gap<ans)
            ans=gap;
    }
    return ans;
}
int main()
{
    int arr[]={10, 4, 7, 9, 2, 23, 25, 41, 30};
    int size = sizeof(arr)/sizeof(arr[0]);
    int m=5; //number of students
    cout<<"Minimum difference is: "<<findMinDiff(arr, size, m);
    return 0;
}