#include<iostream>

using namespace std;


//BIT MANUPULATION

/*
int getBit(int n, int pos) {
    return (n & (1<<pos)) != 0;
}
int setBit(int n, int pos) {
    return (n | (1<<pos));
}

int clearBit(int n, int pos) {
    int mask = ~(1<<pos);
    return (n & mask);
}

int updateBit(int n, int pos, int value) {
    int mask = ~ (1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

int main() {

    cout<<"GetBit :"<<getBit(5, 2)<<endl;
    cout<<"SetBit :"<<setBit(5, 1)<<endl;
    cout<<"ClearBit :"<<clearBit(5, 2)<<endl;
    cout<<"UpdateBit :"<<updateBit(5, 1, 1)<<endl;

    return 0;
} */

//PROB 1 Check if no. is pow of 2
/*
bool ispow2(int n) {
    return (n && !(n & n-1));
}


int main() {

    int n;
    cout<<"Enter a no. :";
    cin>>n;
    cout<<ispow2(n);

    return 0;
}*/

//Count no. of ones
/*

int numberofones(int n) {
    int count = 0;
    while(n) {
        n = n & n-1;
        count++;
    }
    return count;
}


int main() {

    cout<<numberofones(19);

    return 0;
}  */

//Posiible Subset

void subset(int arr[], int n) {
    for(int i=0; i<(1<<n); i++) {
        for(int j=0; j<n; j++) {
            if(i & (1<<j)) {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}




int main() {

    int arr[4] = {1, 2, 3, 4};
    subset(arr, 4);

    return 0;
}