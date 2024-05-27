#include <iostream>
#include<cmath>
using namespace std;
int main() {
    // Write C++ code here
    int num, i=0, bin=0;
    cout<<"enter number:";
    cin>>num;
    while(num!=0)
    {
        int digit = num%2;
        if(digit ==1)
        {
         bin = bin + pow(2,i);   
        }
        num = num/10;
        i++;
    }
    cout<<"Decimal digit is:"<<bin;
    return 0;
}