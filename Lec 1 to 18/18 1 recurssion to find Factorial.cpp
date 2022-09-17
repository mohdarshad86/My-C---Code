#include<iostream>
using namespace std;

int factorial(int n) {

    if(n<=1) {
        return 1;
    }
    
    return n*factorial(n-1);
}

int main() {

    //Factorial of a number 4!=4x3x2x1=24 ie n!=nx(n-1)!
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

    return 0;
}