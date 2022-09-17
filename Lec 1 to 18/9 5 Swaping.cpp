#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapalt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);

            // if SWAP feature isnt available
            /* int temp;
              temp = arr[i];
              arr[i] = arr[0];
              arr[0] = temp; */
        }
    }
}

int main()
{

    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    swapalt(even, 8);
    printarr(even, 8);

    cout << endl;

    swapalt(odd, 5);
    printarr(odd, 5);

    return 0;
}