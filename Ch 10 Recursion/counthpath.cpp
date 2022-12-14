#include <iostream>
using namespace std;

int countPath(int s, int e)
{

    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count += countPath(s + i, e);
    }
    return count;
}

int counthPathMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }

    return counthPathMaze(n, i + 1, j) + counthPathMaze(n, i, j + 1);
}

int main()
{
    // cout << countPath(0, 3);

    cout << counthPathMaze(3, 0, 0);

    return 0;
}