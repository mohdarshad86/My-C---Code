#include<iostream>
using namespace std;

//RECURSION
/*
int Sum(int n) {

    if(n==0) {
        return 0;
    }
    int prevsum = Sum(n-1);
    return n+prevsum;
}

int main() {

    int n;
    cin>>n;
    cout<<Sum(n);

    return 0;
}*/


//N raised to pow p
/*
int power(int n, int p) {

    if(p==0) {
        return 1;
    }
    int prevPower = power(n, p-1);
    return n*prevPower;
}


int main() {

    int n,p;
    cin>>n>>p;
    cout<<power(n, p);

    return 0;
}*/

//Factorial
/*

int factorial(int n){

if(n==0){
return 1;
}
int prevFact = factorial(n-1);
return n*prevFact;
}



int main(){

    int n;
    cin>>n;

    cout<<factorial(n);

    return 0;
}*/

//nth               Fibonacci no.

int Fib(int n) {
    if(n==0 || n==1) {
        return n;
    }
    return Fib(n-1) + Fib(n-2);
}



int main() {

    int n;
    cin>>n;

    cout<<Fib(n)<<" ";

    return 0;
}
    