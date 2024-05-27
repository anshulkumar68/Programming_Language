#include<iostream>
using namespace std;
int main()
{
    bool isPrime=1;
    int num;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            isPrime=0;
            break;
        }
    }
        if(isPrime==0)
        {
            cout<<"Not a Prime number";
        }
        else
        {
            cout<<"Prime number";
        }
}