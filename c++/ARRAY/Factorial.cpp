#include<iostream>
using namespace std;
int main()
{
    int num, i, fact=1;
    cout<<"enter a positive number:";
    cin>>num;
    if(num<0)
        cout<<"Error! factorial of negative number doesn't exist";
    else 
    {for(i=1; i<=num; i++)
        fact=fact*i;
    cout<<"Factorial is:"<<fact<<endl;
    }
    
    return 0;
}