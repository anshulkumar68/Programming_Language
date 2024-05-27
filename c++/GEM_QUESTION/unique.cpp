#include <iostream>
using namespace std;
int unique(int arr[], int size)
{
    int ans=0;
    for(int i=0; i<size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main() {
    int arr[100], size;
    cout<<"enter size:";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Unique element is: "<<unique(arr, size);
    return 0;
} 