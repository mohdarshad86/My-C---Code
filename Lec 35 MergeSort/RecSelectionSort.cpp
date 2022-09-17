#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int n)
{

    if (n == 0 || n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    selectionSort(arr, n - 1);
}

int main()
{
    int arr[6] = {2, 4, 1, 3, 7, 5};
    int size = 6;

    selectionSort(arr, size);
    print(arr, size);
    return 0;
}