// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
// string text;
// int count=0;
// cout<<"Enter string:";
// getline(cin , text) ;
// for(int i=0; i<text.length();i++)
// {
//     if(text[i]=='A'||text[i]=='a'||text[i]=='E'||text[i]=='e'||text[i]=='I'||text[i]=='i'||text[i]=='O'||text[i]=='o'||text[i]=='U'||text[i]=='u')
//         {
//                 count++;
//         }
// }
// cout<<"The number of vowel characters in string:"<<count;
// return 0;
// }

#include <iostream>
#include <string>
using namespace std;
// int count =0;
string vowel_count(string text)
{
    int count=0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'A' || text[i] == 'a' || text[i] == 'E' || text[i] == 'e' || text[i] == 'I' || text[i] == 'i' || text[i] == 'O' || text[i] == 'o' || text[i] == 'U' || text[i] == 'u')
        {
            count++;
        }
    }
return count;
}
int main()
{   
    string str;
    cout<<"Enter string:";
    getline(cin ,str);
    cout<<"vowel count is:"<<vowel_count(str);
    return 0;
}