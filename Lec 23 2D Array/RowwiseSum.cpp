#include <iostream>
using namespace std;

// to print rowwise sum
void printRowSum(int arr[][4], int row, int col)
{
    cout << "Row-Wise Sum :";
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
// to print columnwise sum
void printColSum(int arr[][4], int row, int col)
{
    cout << "Column-Wise Sum :";
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][4], int row, int col)
{

    int maxi = -1;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The max Row sum is :" << maxi << endl;
    return rowIndex;
}

int main()
{
    int arr[3][4];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    printRowSum(arr, 3, 4);
    printColSum(arr, 3, 4);

    cout << largestRowSum(arr, 3, 4);

    return 0;
}