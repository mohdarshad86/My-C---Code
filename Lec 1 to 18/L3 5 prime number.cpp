#include<iostream>
using namespace std;



int main() {

    int i=2, n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(i<n) {
        if(n%i==0) {
            cout<<"Number is not prime for "<<i<<endl;
        }
      else {
            cout<<"Prime for "<<i<<endl;
        }
        i++;
    }

    return 0;
}