// A
// B C
// D E F
// G H I J
// K L M N O
#include <iostream>
using namespace std;
int main() 
{
    int i, n, j;
    char ch='A';
    cout<<"Enter value of n:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        // char ch='A';
        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}