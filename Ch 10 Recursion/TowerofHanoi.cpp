#include <iostream>
using namespace std;

void towerofH(int n, char src, char dest, char helper)
{

    if (n == 0)
    { // base case
        return;
    }

    towerofH(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    towerofH(n - 1, helper, dest, src);
}

int main()
{

    towerofH(3, 'A', 'C', 'B');

    return 0;
}