#include<iostream>
using namespace std;
int cube(int s)
{
    return s*s*s;
}
int main()
{
    int c=0, side;
    cout<<"Enter side:";
    cin>>side;
    c=cube(side);
    cout<<"Cube is:"<<cube(5);
    return 0;
}

