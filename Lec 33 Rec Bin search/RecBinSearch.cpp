#include <iostream>
using namespace std;

bool binSearch(int *arr, int s, int e, int key)
{
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
        binSearch(arr, mid + 1, e, key);

    else
        binSearch(arr, s, mid - 1, key);
}

int main()
{
    int arr[11] = {2, 4, 6, 10, 14, 16, 22, 38, 49, 55, 222};
    int size = 11;
    int key;
    cin >> key;

    if (binSearch(arr, 0, 10, key))
        cout << "Present";

    else
        cout << "Absent";

    return 0;
}