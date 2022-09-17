#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{

    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    else
    {
        bool remain = isSorted(arr + 1, size - 1);
        return remain;
    }
}

int isSum(int *arr, int size)
{

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int remainSum = isSum(arr + 1, size - 1);
    int sum = arr[0] + remainSum;
    return sum;
}

bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
        return false;

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainsearch = linearSearch(arr + 1, size - 1, key);
        return remainsearch;
    }
}

int main()
{
    int arr[5] = {1, 3, 4, 6, 7};
    int size = 5;

    // bool ans = isSorted(arr, size);

    // if (ans)
    // {
    //     cout << "Array is sorted" << endl;
    // }
    // else
    //     cout << "Array is not sorted" << endl;

    // cout << isSum(arr, size);
    int key;
    cin >> key;
    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "Found";
    }
    else
        cout << "Not found";

    return 0;
}