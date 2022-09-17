#include <iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

int sum=0;
int ORGn=n;

    while(n>0){
        int lastd = n%10;
        sum+=pow(lastd, 3);
        n=n/10;
    }
    
    if (ORGn == sum)
    {
        cout<<"Armstrong no. "<<endl;
    }
    else{
        cout<<"Not an Armstrong no. "<<endl;
    }
    
    
    return 0;
}