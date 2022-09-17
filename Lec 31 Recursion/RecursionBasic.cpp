#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }

    //   int smaller = factorial(n - 1);
    //     int bigger = n * smaller;

    //     return bigger;

    int fact = n * factorial(n - 1);
    return fact; // bigger=fact, smaller=factprial(n-1)
}

int Power2(int n)
{

    if (n == 0)
    {
        return 1;
    }
    return 2 * Power2(n - 1);
}

void printseries(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    printseries(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    // cout << "Factorial :" << factorial(n) << endl;

    // cout << "Power :" << Power2(n) << endl;

    cout << endl;
    printseries(n);

    return 0;
}