#include <iostream>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
    { // base case
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0] << " ";
}

void replacepi(string s)
{
    if (s.length() == 0)
    { // base
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacepi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacepi(s.substr(1));
    }
}

int main()
{
    // reverse("binod");

    replacepi("pipfbsdhspfjhspidhdhd");

    return 0;
}