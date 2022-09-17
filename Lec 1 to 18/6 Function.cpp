#include<iostream>
using namespace std;
#include<math.h>

//Function


/*
int add(int n1, int n2) {
    int sum = n1+n2;
    return sum;
}

int main() {

    int a=2, b=3;
    cout<<add(a, b);

    return 0;
} */

//Q1. Prime no.
/*
bool isPrime(int num) {
    for(int i=2; i<num; i++) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}



int main() {

    int a, b;
    cin>>a>>b;

    for(int i=a; i<=b; i++) {
        if(isPrime(i) == true) {
            cout<<i<<" ";
        }
    }

    return 0;
}*/



//2 Fibonacci Series
/*
void fib(int n) {
    int t1=0, t2=1;
    int nxtTerm;

    for(int i=1; i<=n; i++) {

        cout<<t1<<" ";
        nxtTerm = t1+t2;
        t1=t2;
        t2=nxtTerm;
    }
return;
}



int main() {

    int n;
    cout<<"Enter the no. of terms in series :";
    cin>>n;

    fib(n);

    return 0;
}*/



//3 Factorial
/*
int factorial(int n) {
    int fact = 1;
    for(int i=2; i<=n; i++) {
        fact *= i;
    }
    return fact;
}



int main() {

    int n;
    cout<<"Enter a no. :";
    cin>>n;

    int ans = factorial(n);
    cout<<"factorial of "<<n<<" is :"<<ans;

    return 0;
}*/


// 4.nCr

/*
int factorial(int n) {
    int fact =1;
    for(int i=2; i<=n; i++) {
        fact *= i;
    }
    return fact;
}


int main() {

    int n, r;
    cin>>n>>r;

    int ans = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<n<<"c"<<r<<" = "<<ans;


    return 0;
}*/


//5 Pascals triangle

int fact(int n) {
    int factorial = 1;
    for(int i=2; i<=n; i++) {
        factorial *= i;
    }
    return factorial;
}



int main() {

    int n;
    cout<<"Enter the n. of rows in Pascals Triangle :";
    cin>>n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}


