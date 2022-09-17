#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (arr[left] == 0 && left < right)
        {
            left++;
        }
        if (arr[right] == 1 && left < right)
        {
            right--;
        }

        // agr yha tk phunch gye ho iska mtlb
        // arr[i]=1 & arr[j]=0

        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{

    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

    sortOne(arr, 8);
    printarray(arr, 8);

    return 0;
}