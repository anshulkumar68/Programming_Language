#include <iostream>
using namespace std;
int main() {
    int n,a,rev=0;
    cout<<"Enter a positive number:";
    cin>>n;
    if(n<0)
        cout<<"Error! please enter positive number";
    else
    {
        while(n!=0)
        {
            a = n%10;
            rev = rev*10+a;
            n=n/10;
        }
        cout<<"Reverse of number:"<<rev;
    }
    return 0;
}