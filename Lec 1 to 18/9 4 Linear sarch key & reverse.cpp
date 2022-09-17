#include <iostream>
#include <cmath>
using namespace std;

/*bool search(int arr[], int size, int key) {

    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }
        return 0;
 }

int main() {

    int arr[10]  = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    //whether 1 is present?

    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    if(found) {
        cout<<"Key is present"<<endl;
    }
    else {
        cout<<"Key is absent"<<endl;
    }

    return 0;
} */

void reverse(int arr[], int n)
{
    int start = 0;
    // int end = n-1;

    while (start <= n / 2)
    {
        swap(arr[start], arr[n - start - 1]);
        start++;
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    cout << "Reversed Array is :" << endl;
    int arr[17] = {1, 4, 0, 5, -2, 15, 7, 6, 8, 12, 11, 12, 23, 14, 17, 16, 19};
    int brr[5] = {2, 6, 3, 9, 4};

    reverse(arr, 17);
    reverse(brr, 5);

    printarr(arr, 17);
    printarr(brr, 5);

    return 0;
}