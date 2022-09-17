#include <iostream>
using namespace std;

//(I) SERIES

/*int series(int n){

    int ans = (3*n+7);
    cout<<ans<<" ";
    return ans;
    }

int main(){

    int n;
    cin>>n;
    series(n);

    return 0;
} */

// (III) FIBONACCI

int fib(int n)
{

    if (n <= 1)
    {
        return n;
    }
    else
    {
        int ans = fib(n - 1) + fib(n - 2);
        return ans;
    }
}
int main()
{

    int n;
    cout << "Enter the no. of terms in series :" << endl;
    cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << fib(i) << " ";
    // }
    // cout << endl;
    cout << fib(n);

    return 0;
}