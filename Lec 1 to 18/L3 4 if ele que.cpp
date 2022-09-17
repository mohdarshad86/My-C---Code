#include<iostream>
using namespace std;



int main() {

    char ch;
    int a;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90) {
        cout<<"This is uppercase"<<endl;
    }
    else if(ch>=97 && ch<=122) {
        cout<<"This is lowercase";
    }
    else {
        if(ch>=0 && ch<=9) {
            cout<<"This is numeric";
        }
       else {
          cout<<"This is numeric   ";
        }
    }
    return 0;
}