#include<iostream>
using namespace std;

//SIEVE OF ERATOTHENES
/*

void primesieve(int n) {
    int prime[100] = {0};
    for(int i=2; i<n; i++) {
        if(prime[i] == 0) {
            for(int j=i*i; j<n; j+=i) {
                prime[j] = 1;
            }
        }
    }
    for(int i=2; i<=n; i++) {
        if(prime[i]==0) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main() {

    int n;
    cin>>n;

    primesieve(n);

    return 0;
}*/


//PRIME FACTORS
/*
void primefactor(int n) {
    int spf[100]= {0};
    for(int i=2; i<=n; i++) {
        spf[i]=i;
    }
    for(int i=2; i<=n; i++) {
        if(spf[i]==i) {
            for(int j=i*i; j<=n; j+=i) {
                if(spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
    while(n!=0) {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}


int main() {

    int n;
    cin>>n;
    primefactor(n);

    return 0;
}*/

//INCLUSION, EXCLUSION

/*
int divisible(int n, int a, int b) {
    int c1=n/a;
    int c2=n/b;

    int c3=n/(a*b);

    return c1+c2-c3;
}



int main() {

    int n, a, b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b);

    return 0;
}*/


//EUCLIDS ALGO FOR HCF


int gcd(int a, int b){
while(b!=0){
int rem  = a%b; 
a = b;
b=rem;
}
return a;
}


int main(){
    
    int a, b;
    cin>>a>>b;
    cout<<gcd(a, b);
    
    return 0;
}