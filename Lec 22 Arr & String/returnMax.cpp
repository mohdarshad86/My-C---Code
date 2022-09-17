#include <iostream>
using namespace std;

char getMax(string s)
{

    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {

        char ch = s[i];

        // lowercase
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            // uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }
    int ans = 0, maxi = -1;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    cin >> s;

    cout << getMax(s) << endl;
    return 0;
}