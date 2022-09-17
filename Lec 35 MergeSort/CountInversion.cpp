#include <iostream>
using namespace std;

int merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int inv = 0;

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

            // COUNT INVERSION

            inv += len1 - index1;
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

    return inv;
}

int mergeSort(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return 0;
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

    // // BRUTE FORCE
    // int arr[8] = {3, 5, 6, 9, 1, 2, 7, 8};
    // int n = 8;
    // int inv = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             inv++;
    //         }
    //     }
    // }
    // cout << inv << endl;

    int arr[8] = {3, 5, 6, 9, 1, 2, 7, 8};
    int n = 8;
    cout << mergeSort(arr, 0, 7);

    return 0;
}