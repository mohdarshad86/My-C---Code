#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{

    if (n == 1)
    {
        return 1;
    }

    bool restArr = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArr);
}

int main()
{

    int arr[] = {1, 3, 6, 8, 12, 159, 188, 435};
    cout << sorted(arr, 8);
    return 0;
}