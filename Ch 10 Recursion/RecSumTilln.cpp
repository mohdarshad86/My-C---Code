#include <iostream>
using namespace std;

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevsum = Sum(n - 1);
    return (n + prevsum);
}

int power(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    int prevpow = power(n, p - 1);
    return n * prevpow;
}

int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }

    int prevfact = factorial(n - 1);
    return n * prevfact;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    // int n;
    // cin >> n;
    // cout << Sum(n);

    // int n, p;
    // cin >> n >> p;
    // cout << power(n, p);

    // int n;
    // cin >> n;
    // cout << factorial(n);

    int n;
    cout << "Enter the no.of element of series :" << endl;
    cin >> n;

    cout << fib(n - 1) << " ";

    return 0;
}