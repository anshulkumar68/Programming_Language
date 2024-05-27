#include <iostream>
using namespace std;
int power()
{
    int a, b;
    int ans=1;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Enter number of power: ";
    cin>>b;
    for(int i=1; i<=b; i++)
    {
        ans = ans *a;
    }
    return ans;
}
int main() {
    int ans=0;
    ans = power();
    cout<<"Power of given number is: "<<ans<<endl;
    ans = power();
    cout<<"Power of given number is: "<<ans<<endl;
    return 0;
}