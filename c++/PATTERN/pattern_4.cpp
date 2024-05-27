// A
// B B
// C C C
// D D D D
// E E E E E
#include <iostream>
using namespace std;
int main() 
{
    int i, n;
    cout<<"Enter value of n:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        int j=1;
        char ch='A'+i-1;
        while(j<=i)
        {
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}