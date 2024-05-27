#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[100],n,res=0;
    cout<<"Enter number of elements:";
    cin>>n;
    for(int i=0; i<n; i++)
    { 
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        res=pow(arr[i],3);
        cout<<"Cube of "<<i+1<<" number: "<<res<<endl;
    }
}