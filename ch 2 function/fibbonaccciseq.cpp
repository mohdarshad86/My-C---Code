#include <iostream>
using namespace std;


void fib(int n){

    int t1=0;
    int t2=1;
    int NextTerm;

for (int i = 1; i <= n; i++)
{
    cout<<t1<<" ";
    NextTerm = t1+t2;
    t1=t2;
    t2=NextTerm;
}
cout<<endl;
return;


}

int main(){

    int n;
    cout<<"Input no. of elements of a fib sequence you want to print :";
    cin>>n;

    fib(n);
    
    return 0;
}