#include<iostream>
using namespace std;

//Character Arrays

int main() {

    /*   char arr[100] = "Apple";
       int i=0;

       while(arr[i] != '\0') {
           cout<<arr[i];
           i++;
       }  */

//I/p and o/p
    /*
           char arr[100];
        cin>>arr;

        cout<<arr[2]; */

    //Check Palindrome

    /*  int n;
      cin>>n;

      char arr[n+1];
      cin>>arr;

      bool check = 1;
      for(int i=0; i<n; i++) {
          if(arr[i] != arr[n-1-i]) {
              check = 0;
              break;
          }

      }
      if(check == true) {
          cout<<"Word is a Palindrome";
      }
      else {
          cout<<"Is not a Palindrome";
      } */


    //Largest word ion a sentence


    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currlen = 0, maxlen = 0;
    int st=0, maxst=0;

    while(1) { //true

        if(arr[i] == ' ' || arr[i] == '\0') {
        
            if(currlen > maxlen) {
                maxlen = currlen;
            maxst = st;
            }
            currlen = 0;
            st = i+1;
        }
       else
        currlen++;
        if(arr[i] == '\0')
            break;
        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0; i<maxlen; i++){
    cout<<arr[i+maxst];
    }

    return 0;
}