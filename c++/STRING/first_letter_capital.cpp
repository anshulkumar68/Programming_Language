#include <iostream>
using namespace std;
string capitalize_letter(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (i == 0)
            text[i] = toupper(text[i]);
        else if (text[i - 1] == ' ')
            text[i] = toupper(text[i]);
    }
    return text;
}
int main()
{
    string str;
    cout << "Enter string :";
    getline(cin, str);
    cout << capitalize_letter(str) << endl;
    // cout << capitalize_letter("c++ string program") << endl;
    return 0;
}