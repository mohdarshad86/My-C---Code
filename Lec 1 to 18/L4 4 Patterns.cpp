#include<iostream>
using namespace std;

//TRIANGULAR PATTERN

int main() {

    /* int n;
     cin>>n;

     int i=1;
     while(i<=n) {
         int j=1;
         while(j<=i) {
             char ch = 'A'+i-1;
             cout<<ch<<" ";
             j++;
         }
         cout<<endl;
         i++;
     } // output A BB CCC */

    /* int n;
     cin>>n;

     int i = 1;
     while(i<=n) {
         int j = 1;
         while(j<=i) {
             char ch = 'A'+i+j-2;
             cout<<ch;
             j++;
         }
         cout<<endl;
         i++;
     } // output A BC CDE */

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1;
        char start = 'A'+n-i;

        while(j<=i) {
            cout<<start;
            start = start +1;
            j++;
        }
        cout<<endl;
        i++;
    } //output C BC ABC */

    /* int n;
     cin>>n;

     int i = 1;
     while(i<=n){
     //space print

     int space = n-i;
     while(space){
     cout<<" ";
     space = space - 1;
     }
     // * print
     int j = 1;
     while(j<=i){
     cout<<"*";
     j++;
     }
     cout<<endl;
     i++;

     } //output _ _ _*, _ _ **, _ ***, **** */

    /*int n;
    cin>>n;

    int i = 1;
    while(i<=n){
    int j = 1;

    while(j<=(n-i+1)){
    cout<<"*";
    j++;
    }
    cout<<endl;
    i++;
    } // output *** ** * */

    int n;
    cin>>n;

    int i=1;
    while(i<=n) {

        int space = i-1;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        int j =1;
        while(j<=(n-i+1)) {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }



    return 0;
}
    