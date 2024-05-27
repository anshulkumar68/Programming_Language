#include<iostream>
using namespace std;
int main()
{
    int arr[10], n, index;
    cout<<"Enter elements between (1 to 10):";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter number "<<i+1<<":";
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
            max=arr[i];
        index =i;
    }
    cout<<"Maximum value "<<max<<" on index "<<index;
    return 0;
}