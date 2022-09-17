#include <iostream>
using namespace std;

void print(int *p)
{
    cout << "Address :" << p << endl;
    cout << "Value :" << *p << endl;
}

void update(int *p)
{
    // p = p + 1;
    // cout << "Inside " << p << endl;

    *p = *p + 1;
}

int getSum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += i[arr]; // same as arr[i]
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    // print(p);

    cout << "Before :" << *p << endl;
    update(p);
    cout << "After :" << *p << endl;

    int arr[7] = {1, 2, 3, 4, 5, 8, 6};

    cout << "Sum :" << getSum(arr + 3, 4) << endl;

    return 0;
}