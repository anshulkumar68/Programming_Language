// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 
#include <iostream>
using namespace std;
int main() 
{
    int i, n, count=1;
    cout<<"Enter value of n:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        int j=i, value =i;
        while(j>0)
        {
            cout<<value<<" ";
            value--;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}