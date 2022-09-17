#include<iostream>
using namespace std;

//Prob 1 First repeating element

int main() {

    /*    int n;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        const int N = 1e6+2;
        int idx[N];
        for(int i=0; i<N; i++)
        {
            idx[i] = -1;
        }

        int minidx = INT_MAX;

        for(int i=0; i<n; i++) {
            if(idx[a[i]] != -1) {
                minidx = min(minidx, idx[a[i]]);
            }
            else {
                idx[a[i]] = i;
            }
        }

        if(minidx == INT_MAX) {
            cout<<"-1"<<endl;
        }
        else {
            cout<<minidx+1<<endl; //+1 isliye kyuk 1 se init kia h ques m.
        }  // out will be index + 1 = 2.  */



    //Prob 2 Subarray with given sum

    /*   int n, s;
       cin>>n>>s;

       int a[n];
       for(int i=0; i<n; i++) {
           cin>>a[i];
       }

       int i=0, j=0, st=-1, en=-1, sum=0;

       while(j<n && (sum+a[j]<=s)) {
           sum += a[j];
           j++;
       }
       if(sum == s) {
           cout<<i+1<<" "<<j<<endl;
           return 0;
       }

       while(j<n) {
           sum += a[j];
           while(sum > s)
           {
               sum -= a[i];
               i++;
           }
           if(sum == s) {
               st = i+1;
               en = j+1;
               break;
           }
           j++;
       }
       cout<<st<<" "<<en<<endl;  */



    //Prob 3 Smallest positive missing no.


    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    const int N = 1e6+2;

    bool check[N] ;
    for(int i=0; i<n; i++) {
        check[i] = false; // or 0
        }

        for(int i=0; i<n; i++) {
            if(a[i] >= 0) {
                check[a[i]] = 1; // or true
            }
        }
        int ans = -1;
        for(int i=1; i<N; i++) {
            if(check[i] == false)
            {
                ans = i;
                break;
            }
        }

        cout<<ans<<endl;



        return 0;
    }