#include<iostream>
using namespace std;
void fun()
{
    cout<<"Hello";
}
void test()
{
    cout<<"Welcome to C++"<<endl;
    return fun();
}
int main()
{
    test();
    return 0;
}