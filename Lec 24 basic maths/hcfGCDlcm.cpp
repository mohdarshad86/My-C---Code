#include <iostream>
using namespace std;

int gcd(int a, int b)

{
    if (a == 0)
    {
        return a;
    }
    if (b == 0)
    {
        return b;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "GCD :" << gcd(a, b) << endl;

    int lcm;
    lcm = (a * b) / gcd(a, b);
    cout << "LCM :" << lcm;

    return 0;
}