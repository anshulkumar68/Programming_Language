#include <iostream>
using namespace std;
int fibonacci(int num, int term)
{
    int num1 =0, num2 =1, num3=0;
    for(int i=2; i<=num; i++)
    {
        num3 = num1+num2;
        num1=num2;
        num2=num3;
        // cout<<num3<<" ";
        if(i==term-1)
        {
            return num3;
        } 
    // return num3;
    }
}
// Driver Program to test above function
int main()
{
    int num, term, ans;
    cout<<"enter number:";
    cin>>num;
    cout<<"enter nth fibonacci term:";
    cin>>term;
    ans = fibonacci(num, term);
    cout<<"\nFibonacci term value is:"<<ans;
    return 0;
}