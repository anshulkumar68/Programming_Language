#include <iostream>
using namespace std;
int factorial(int n)
{
    int  fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num, deno, ans=0;
    num = factorial(n);
    deno = factorial(r)*factorial(n-r);
    return num/deno;
    // return ans;
}
int main() {
    int n, r;
    cout<<"enter value of n and r: ";
    cin>>n>>r;
    int ans = nCr(n,r);
    cout<<"nCr answer is: "<<ans;
    return 0;
}