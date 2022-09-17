#include <iostream>
using namespace std;

int main()
{
    /* int arr[10] = {23, 122, 41, 67};
     cout << "Address of first memory block " << arr + 1 << endl;
     cout << arr[0] << endl;
     cout << "Address of first memory block " << &arr[1] << endl;
     cout << *arr << endl;
     cout << *(arr + 1) << endl;

     int i = 3;
     cout << arr[3] << " = " << i[arr] << endl; // arr[3] hi dega

    int temp[10];
    cout << sizeof(temp) << endl;
    cout << "1st " << sizeof(*temp) << endl;
    cout << "2nd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];

    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    int a[20] = {1, 2, 3, 4};
    cout << "Address of arr[0] " << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << "Address of pointer " << &p << endl; */

    int arr[10];
    // ERROR  arr=arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}