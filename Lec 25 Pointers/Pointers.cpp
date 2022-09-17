#include <iostream>
using namespace std;

int main()
{
    // int num = 5;
    // cout << "Addres of num is :" << &num << endl;

    // int *ptr = &num;
    // cout << "The value of num is :" << *ptr << endl;
    // cout << "Also address is :" << ptr << " or " << &num << endl;
    // // ptr ya &num dono hi address denge
    // // aur *ptr ya num dono value denge

    // double d = 4.3;
    // double *p2 = &d;

    // cout << "Size of integer is :" << sizeof(d) << endl;
    // cout << "Size of pointer is :" << sizeof(p2) << endl;

    // int i = 5;
    // int *q = &i;

    // cout << q << endl;
    // cout << *q << endl;

    // int *p = 0;
    // p = &i;
    // cout << p << endl;
    // cout << *p << endl;

    int num = 5;
    int a = num;
    cout << "a before :" << num << endl;
    a++;
    cout << "a after :" << num << endl; // still 5

    int *p = &num;
    cout << "before num :" << num << endl;
    (*p)++;
    cout << "after num :" << num << endl; // now 6

    // copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // IMPORTANT CONCEPT

    int i = 3;
    int *t = &i;
    // cout << (*t)++ << endl;
    cout << "before t " << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;
    // cout << *t << endl;

    return 0;
}