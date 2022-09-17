#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrIndex++];
    }

    mainArrIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrIndex++];
    }

    // merge 2 sorted array

    int index1 = 0, index2 = 0;

    mainArrIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left part sorting
    mergeSort(arr, s, mid);

    // right part sort
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

int main()
{
    int arr[12] = {2, 5, 1, 6, 9, 0, 13, 15, 12, 17, 4, 23456};
    int n = 12;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}