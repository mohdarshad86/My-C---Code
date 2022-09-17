#include<iostream>
using namespace std;



int main() {

    /*    int n;
        cin>>n;
        int row = 1;

        while(row <= n) {
            int col = 1, val = row;

            while(col <= row) {
                cout<<val;
                val = val +1;
                col = col +1;
            }
            cout<<endl;
            row = row +1;
        }*/

    /* int n;
     cin>>n;

     int i =1;
     while(i <= n){
        int j = 1;
     while(j <= i){
     cout<<(i-j+1)        <<" ";
     j++;
     }
     cout<<endl;
     i++;
     }*/

    /* int n;
     cin>>n;

     int row = 1;

     while(row <= n) {
         int col =1;
         while(col <= n) {

             char ch = 'A' + row - 1;
             cout<<ch<<" ";
             col = col + 1;
         }
         cout<<endl;
         row = row + 1; // AAA BBB CCC
     }*/

    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            char ch= 'A'+j-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    } // output ABC ABC ABC

    return 0;
}