#include <iostream>
using namespace std;

bool checkPalin(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
        return false;
    else
    {
        // RECURSIVE CALL
        return checkPalin(str, i + 1, j - 1);
    }
}

int main()
{
    string name = "bookkobk";
    cout << endl;

    bool isPalin = checkPalin(name, 0, name.length() - 1);

    if (isPalin)
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}