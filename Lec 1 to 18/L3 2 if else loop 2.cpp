#include<iostream>
using namespace std;



int main() {

    /*int a,b;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;

    if(a>b){
    cout<<"a is greater"<<endl;
    }
    if(b>a){
    cout<<"b is greater";
    }*/

    int a;
    cout<<"Enter a"<<endl;
    cin>>a;
    

    if(a>0) {
        cout<<"a is positive";
    }
    else {
        if(a<0) {
            cout<<"a is negative";
        }
        else {
            cout<<"a is zero";
        }
    }

    return 0;
}