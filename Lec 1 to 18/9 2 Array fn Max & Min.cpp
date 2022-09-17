#include<iostream>
using namespace std;

int getmin(int num[], int n) {
    int min = INT_MAX;

    for(int i=0; i<n; i++) {
        if(num[i]<min) {
            min=num[i];
        }
    }
    return min;
}

int getmax(int num[], int n) {
    //int max = INT_MIN;
    int maxi = INT_MIN;

    for(int i=0; i<n; i++) {
    
    maxi = max(maxi, num[i]); // Aise bhi likh skte hn
    
        /*if(num[i]>max) { // ya aise, ek hi baat.
            max=num[i];
        }*/
    }
    return maxi;
}


int main() {

    int size;
    cin>>size;

    int num[100];
    //Taking input in array
    for(int i=0; i<size; i++) {
        cin>>num[i];
    }
    cout<<"Max value is "<<getmax(num, size)<<endl;
    cout<<"Min value is "<<getmin(num, size)<<endl;

    return 0;
}