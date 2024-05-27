#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    int len=s.size();
    int st=0, e=len-1;
        
        while(st<e)
        {
            swap(s[st++],s[e--]);
        }

    cout<<"Reverse of string:"<<s;
	return 0;
}