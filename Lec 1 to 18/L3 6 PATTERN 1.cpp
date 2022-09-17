#include<iostream>
using namespace std;

//PATTERN

int main() {

    /*int n;
    cout<<"Enter no. of rows for pattern :";
    cin>>n;

    int i=1;
    while(i<=n){

    int j = 1;
    while(j<=n){
    cout<<"*";
    j++;
    }
    cout<<endl;
    i++;
    }*/

    int n;
    cin>>n;
    int i =1;
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}