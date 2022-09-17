#include<iostream>
using namespace std;

int binsearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end) {
        if(arr[mid] == key) {
            return mid;
        }
        //Go to right part
        if(key > arr[mid]){
        start = mid +1;
        }
        else{
        end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    // Key is not present
    return -1;
}

int main() {

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};
    
    int evenindex = binsearch(even, 6, 12);
    cout<<" Index of 12 in even is "<<evenindex<<endl;
    
    int oddindex = binsearch(odd, 5, 20);
    cout<<" Index of 20 in odd is "<<oddindex<<endl;

    return 0;
}