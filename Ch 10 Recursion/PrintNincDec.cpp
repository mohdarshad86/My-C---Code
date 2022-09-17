#include <iostream>
using namespace std;

void Dec(int n)
{
    if (n == 1)
    {
        cout << "1"
             << " ";
        return;
    }
    cout << n << " ";
    Dec(n - 1);
}

void inc(int n)
{

    if (n == 1)
    {
        cout << "1"
             << " ";
        return;
    }

    inc(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    Dec(n);
    cout << endl;
    inc(n);
    return 0;
}