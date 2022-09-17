#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int minind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minind])
                minind = j;
        }
        swap(arr[minind], arr[i]);
    }
    print(arr, n);
}

int main()
{
    int arr[6] = {2, 4, 1, 3, 7, 5};
    int size = 6;

    selectionSort(arr, size);
    return 0;
}