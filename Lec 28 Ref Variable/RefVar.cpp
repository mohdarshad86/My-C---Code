#include <iostream>
using namespace std;

void update2(int &n)
{
    n++;
}

void update1(int n)
{
    n++;
}

int main()
{
    int i = 5;

    // // create a ref var
    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;

    // j++;
    // cout << j << endl;
    // cout << i << endl;

    // int n = 5;

    // cout << "Before :" << n << endl;

    // update1(n);
    // cout << "After :" << n << endl;

    // update2(n);
    // cout << "After :" << n << endl;

    char ch = 'q';
    cout << sizeof(ch) << endl;

    char *c = &ch;
    cout << sizeof(c) << endl;

    return 0;
}