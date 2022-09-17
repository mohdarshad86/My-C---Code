#include<iostream>
using namespace std;

int main()
{

    int a=4, b=5;
    cout<<"Hello World"<<endl;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    cout<<endl;

    //ASSIGNMENT OPERATOR -> USED TO ASSIGN VALUES int a=3, b=4, char c=u;

    // COMPARISON OPERATOR
    cout<<"Following are the comparison operator in c++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;
    
    cout<<"Following are the Logical operator in c++"<<endl;
    cout<<"The value of ((a==b) && (a<b)) logical operator is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) logical operator is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of NOT! is "<<(!(a==b))<<endl;



    return 0;
}