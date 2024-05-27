// count which letter occurs more times
#include<iostream>
using namespace std;
 char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        
        for(int i=0; i<str.size(); i++)
        {
            int number=0;
            char ch=str[i];
            number = ch - 'a';
            arr[number]++;
        }
        
        int max=0, ans=0;
        
        for(int i=0; i<26; i++)
        {
            if(max<arr[i])
            {
                ans=i;
                max=arr[i];
            }
        }
        return 'a'+ ans;
    }

    int main()
    {
        string str;
        cout<<"enter string: ";
        cin>>str;
        cout<<"maximum occurence characrer: "<<getMaxOccuringChar(str);
    }