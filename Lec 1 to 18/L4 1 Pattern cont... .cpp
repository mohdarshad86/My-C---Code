#include<iostream>
using namespace std;



int main() {

    /* int n;
     cin>>n;
     int i =1;

     while(i<=n){
     int j = 1;
     while(j<=n){
     cout<<j;
     j++;
     }
     cout<<endl;
     i++;
     } //output 123456 */

    /*  int n;
      cin>>n;
      int i =1;

      while(i<=n){
      int j = 1;
      while(j<=n){
      cout<<n-j+1;
      j++;
      }
      cout<<endl;
      i++;
      } //output 654321 */

    /*int n;
    int count=1;
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<count<<" ";
            count = count + 1;
            j++;
        }
        cout<<endl; //output 123 456 789
        i++;
    }*/

    /*int n;
    cin>>n;

    int row = 1;
    while(row<=n){

    int col = 1;
    while(col<=row){
    cout<<"*";
    col = col +1;
    }
    cout<<endl;
    row = row+1;
    }*/ // output * ** *** ****


    int n;
    cin>>n;

    int row = 1;
    while(row <= n) {

        int col = 1;
        while(col <= row) {
            cout<<row;
            col = col+1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}