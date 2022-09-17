#include <iostream>
using namespace std;

int firstindex(int *arr, int s, int e, int key)
{
    int ans = -1;

    if (s > e)
    {
        return 0;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == key && s <= e)
    {
        ans = mid;

        e = mid - 1;
    }

    if (arr[mid] < key)
    {
        return firstindex(arr, mid + 1, e, key);
    }
    if (arr[mid] > key)
    {
        return firstindex(arr, s, mid - 1, key);
    }

    return ans;
}

int lastIndex(int *arr, int s, int e, int key)
{
    int ans = -1;

    if (s > e)
    {
        return 0;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        ans = mid;
        s = mid + 1;
    }
    if (arr[mid] < key)
    {
        return lastIndex(arr, mid + 1, e, key);
    }
    if (arr[mid] > key)
    {
        return lastIndex(arr, s, mid - 1, key);
    }

    return ans;
}

int main()
{
    int arr[12] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 9};
    // int key = 1;

    cout << firstindex(arr, 0, 11, 3) << endl;
    // cout << lastIndex(arr, 0, 11, 3);
    return 0;
}