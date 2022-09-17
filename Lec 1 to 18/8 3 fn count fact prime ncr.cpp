#include<iostream>
using namespace std;
/*
// 1 --> even
// 0 --> odd
bool isEven(int a) {

    if(a&1) { //odd
        return 0;
    }
    else { // even
        return 1;
    }
}

int main() {

    int num;
    cin>>num;

    if(isEven(num)) {
        cout<<"Number is even"<<endl;
        }
        else {
            cout<<"Number is odd";
        }

        return 0;
    } */
/*
int fact(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact= fact*i;
    }
    return fact;
}
int nCr(int n, int r){

int num = fact(n);
int den = fact(r) * fact(n-r);

return num/den;
}

int main() {

    int n, r;
    cin>>n>>r;

    cout<<"Answer is :"<<nCr(n, r)<<endl;

    return 0;
} */
/*
//FUNCTION SIGNATURE
void printcount(int n){
//FUNCTION BODY
    for(int i=0; i<=n; i++){
    cout<<i<<" ";
    }
    cout<<endl;
}


int main(){

    int n;
    cin>>n;
    //FUNCTION CALL
    printcount(n);

    return 0;
} */

// 1 --> PRIME NO.
// 0 --> NOT PRIME

bool isPrime(int n) {

    for(int i=2; i<n; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int n;
    cin>>n;

    if(isPrime(n)) {
        cout<<"Is a prime number"<<endl;
    }
    else {
        cout<<"Not a prime no.";
    }

    return 0;
}