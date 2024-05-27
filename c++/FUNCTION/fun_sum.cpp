#include<iostream>
using namespace std;
int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b, c=0;
    cout<<"Enter two values:";
    cin>>a>>b;
    c=sum(a,b);
    cout<<"Sum is:"<<c;
    return 0;
}
