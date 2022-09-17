#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int sum = 5;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 6; j > i; j--)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " " << arr[j];
            }
        }
        cout << endl;
    }

    return 0;
}