#include <iostream>
#include<string>
using namespace std;
int main()
{
    string ans;
    cout<<"What's the time:";
    getline(cin, ans);
    cout<<ans<<endl;
    ans.push_back('g');
    cout<<"Insert the character:"<<ans<<endl;
    ans.pop_back();
    cout<<"Insert the character:"<<ans<<endl;
    return 0;
}