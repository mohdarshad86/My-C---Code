#include<iostream>
using namespace std;

//BIT MANUPULATION PROBLEM

//Prob 4 Unique no.
/*
int unique(int arr[], int n) {
    int xorsum = 0;
    for(int i=0; i<n; i++) {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main() {

    int arr[] = {1,2,3,4,5,6,4,7};
    cout<<unique(arr, 8);

    return 0;
}  */

//Prob 5 Two Unique no
/*
int FsetBit(int n, int pos) {
    return ((n & (1<<pos)) != 0);
}

void unique(int arr[], int n) {
    int xorsum = 0;
    for(int i=0; i<n; i++) {
        xorsum = xorsum^arr[i];
    }

    int tempxor = xorsum;
    int setbit=0;
    int pos=0;
    while(setbit != 1) {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }

    int newxor=0;
    for(int i=0; i<n; i++) {
        if(FsetBit(arr[i], (pos-1))) {
            newxor = newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}


int main() {

    int arr[] = {1,2,3,4,5,6,7,1,2,3,4,6};
    unique(arr, 13);

    return 0;
}  */


bool getBit(int n, int pos) {
    return ((n & (1<<pos)) !=0);
}

int setBit(int n, int pos) {
    return n | (1<<pos);
}

int unique(int arr[], int n) {

    int result = 0;
    
    for(int i=0; i<64; i++) {
        int sum=0;
        for(int j=0; j<n; j++) {
            if(getBit(arr[j], i)) {
                sum++;
            }
        }
        if(sum%3 != 0) {
            result = setBit(result, i);
        }
    }
    return result;
}



int main() {

    int arr[] = {1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr, 10);

    return 0;
}