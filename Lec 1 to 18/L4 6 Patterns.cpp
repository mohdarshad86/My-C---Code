#include<iostream>
using namespace std;



int main() {

    /*1 int n;
        cin>>n;

        int i=1;
        while(i<=n) {
            //print space 1st triangle

            int space = n-i;
            while(space) {
                cout<<" ";
                space = space - 1;
            }

            //print 2nd triangle

            int j = 1;
            while(j<=i) {
                cout<<j;
                j++;
            }

            //print 3rd triangle

            int start = i-1;
            while(start) {
                cout<<start;
                start = start - 1;
            }

            cout<<endl;
            i++;
        } */



//2(i)
    int i = 5;
    while(i>=1) {

        int j = 1;
        while(j<=i) {
            cout<<j;
            j++;
        }
        int k = i;
        while(k<5) {
            cout<<"**";
            k++;
        }
        int m = i;
        while(m>=1) {
            cout<<m;
            m--;
        }
        cout<<endl;
        i--;
    }

    /*2(ii)   int i, j, k, m;
        for(i=5; i>=1; i--) {
            for(j=1; j<=i; j++)
                cout<<j;

            for(k=i; k<5; k++)
                cout<<"**";

            for(m=i; m>=1; m--)
                cout<<m;

            cout<<endl;
        } */


    return 0;
}