#include <iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1; // kuchh chnage hoga NO

    // *p2 = *p2 + 1; //kuchh change hoga yes

    **p2 = **p2 + 1; // kuchh change hoga YES
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    /* cout << "Everythings Good. " << endl;

     cout << "Printing p" << p << endl;
     cout << "Address of p is :" << &p << endl;

     cout << *p2 << endl;

     cout << i << endl;
     cout << *p << endl;
     cout << **p2 << endl;

     cout << &i << endl;
     cout << p << endl;
     cout << *p2 << endl;

     cout << &p << endl;
     cout << p2 << endl;*/

    cout << "*********************" << endl;

    cout << "Before :" << i << endl;
    cout << "Before :" << p << endl;
    cout << "Before :" << p2 << endl;

    update(p2);

    cout << "After :" << i << endl;
    cout << "After :" << p << endl;
    cout << "After :" << p2 << endl;
    return 0;
}