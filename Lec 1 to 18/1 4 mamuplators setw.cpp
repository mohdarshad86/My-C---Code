#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    
    int a=3, b=78, c=1233;
    cout<<"The value of a without is: "<<a<<endl;
    cout<<"The value of b without is: "<<b<<endl;
    cout<<"The value of c without is: "<<c<<endl;
    
    cout<<"The value of a with setw is: "<<setw(6)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(6)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(6)<<c<<endl;
    
    return 0;
}