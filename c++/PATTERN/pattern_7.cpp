#include <iostream>
using namespace std;
int main() 
{
    int i, n, j, count=1;
    // char ch1='A';
    cout<<"Enter value of n:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            // char ch='A'+i+j-2;
            cout<<i+j-1<<" ";
            // count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}