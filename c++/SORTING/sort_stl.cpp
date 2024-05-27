#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() 
{
    vector<int> arr={92,4,44,1,84,3};
    // cout<<"enter size:";
    // cin>>size;
    // for(int i=0; i<size; i++)
    // {
    //     cin>>arr[i];
    // }
    sort(arr.begin(), arr.end());
    // cout<<"Unique element is: "<<unique(arr, size);
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
} 