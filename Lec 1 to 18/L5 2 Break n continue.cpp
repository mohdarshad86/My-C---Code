#include<iostream>
using namespace std;



int main() {

    /*  int n;
      cout<<"Enter the value of n :";
      cin>>n;

      for(int i =1; i<=n; i++){
      cout<<i<<endl;
      } */ // 1 to n

    /* int n, sum=0;
     cout<<"Enter the value of n :";
     cin>>n;

     for(int i =1; i<=n; i++){
     sum = sum + i;
     }
     cout<<sum; */ // sum uto n

    //Fibonacci series

    /* int n = 10;
     int a=0, b=1;
     cout<<a<<" "<<b<<" ";

     for(int i =1; i<=10; i++){

     int nxtnumb = a+b;
     cout<<nxtnumb<<" ";

     a = b;
     b = nxtnumb;
     } */

    /*  int n;
      cout<<"Enter the value of n :";
      cin>>n;

      bool isprime = 1;

      for(int i=2; i<n; i++) {

          if(n%i==0) {
              isprime = 0;
              break;
          }
      }

      if(isprime == 0) {
          cout<<"Not a prime number"<<endl;
      }
      else {
          cout<<"Prime number";

      }*/

    for(int i =0; i<5; i++) {
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        continue;
        cout<<"Reply";
    }



    return 0;
}