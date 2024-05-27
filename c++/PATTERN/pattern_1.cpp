// 6 5 4 3 2 1 
// 6 5 4 3 2 1 
// 6 5 4 3 2 1 
// 6 5 4 3 2 1 
// 6 5 4 3 2 1 
// 6 5 4 3 2 1 
#include <iostream>
using namespace std;
int main() 
{
    int i, n, j;
    cout<<"Enter value of n:";
    cin>>n;
    i=n;
    while(i>0)
    {
        j=n;
        while(j>0)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i--;
    }
    return 0;
}