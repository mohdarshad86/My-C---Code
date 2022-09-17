#include<iostream>
using namespace std;



int main(){
    /*Sum of n numbers
    int n, i=1, sum=0;
    cin>>n;
    while(i<=n){
    sum = sum + i;
    i++;
    }
    cout<<"The value of sum is "<<sum<<endl;*/
    
    //Sum of even numbers
    int n, i, sum=0;
    cout<<"Enter n :";
    cin>>n;
    for(i=1; i<=n; i++){
    if((i%2)==0){
    sum +=i;
    }
    }
    cout<<"The sum of even numbers from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}