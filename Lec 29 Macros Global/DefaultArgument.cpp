#include <iostream>
using namespace std;

void print(int arr[], int n, int start = 0)
{

    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 4, 7, 8, 9};

    print(arr, 5, 2);

    return 0;
}