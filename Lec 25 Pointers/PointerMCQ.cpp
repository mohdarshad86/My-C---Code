#include <iostream>
using namespace std;

int main()
{
    // int first = 8;
    // int second = 18;

    // int *ptr = &second;
    // *ptr = 9;

    // cout << first << " " << second << endl; // 8,9

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << first << endl; //7

    // int first = 8;
    // int *p = &first;
    // cout << (*p)++ << " "; // 8
    // cout << first << endl; // 9

    // int *p = 0;
    // int first = 110;
    // *p = first; //wrong
    // cout << *p << endl;

    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second << endl;

    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;

    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl; //21.5,21.5,21.5

    // int arr[5];
    // int *ptr;

    // cout << sizeof(arr) << " " << sizeof(ptr) << endl; //20, 8

    // int arr[] = {11, 21, 13, 14};

    // cout << *arr << " " << *(arr + 1) << endl;

    // int arr[6] = {11, 12, 13};
    // cout << arr << " " << &arr << endl; //Same address for both

    int arr[6] = {11, 12, 31};
    int *p = arr;
    cout << p[2]; // arr[2]=31

    return 0;
}