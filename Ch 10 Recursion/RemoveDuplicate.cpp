#include <iostream>
using namespace std;

string removeDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return ch + ans;
}

string moveallx(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{
    // cout << removeDup("aaaabbbbbbcccccddd");

    cout << moveallx("axxbdxcefxffdxx");

    return 0;
}