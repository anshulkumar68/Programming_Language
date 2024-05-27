#include<iostream>
using namespace std;
int main()
{
    int a=0, b=1, n, c, i;
    cout<<"Enter the number of steps:";
    cin>>n;
    cout<<"fibonacci series:"<<a<<" "<<b<<" ";
    if(n<0)
        cout<<"Error! please enter positive number:";
    else
    {
        for(i=2; i<=n; i++)
        {
            c= a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
    return 0;
}15