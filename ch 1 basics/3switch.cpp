#include <iostream>
using namespace std;

int main(){

//     char button;
//     cin>>button;

//     switch (button)
//     {
// case 'a':
//         cout<<"Hello";
//         break;
    
// case 'b':
//         cout<<"Namaste";
//         break;

// case 'c':
//         cout<<"Salam";
//         break;


// case 'd':
//         cout<<"Hola";
//         break;

// case 'e':
//         cout<<"Ciao";
//         break;        

//     default:
//     cout<<"I am still learning!"<<endl;
//     break;
//     }


float n1,n2;
cout<<"Enter two numbers :";
cin>>n1>>n2;

char op;
cout<<"Enter a operator :";
cin>>op;

switch (op)
{
case '+':
    cout<<n1+n2<<endl;
    break;
case '-':
    cout<<n1-n2<<endl;
    break;
    case '*':
    cout<<n1*n2<<endl;
    break;
    case '/':
    cout<<n1/n2<<endl;
    break;    

default:
cout<<"Enter another  operator"<<endl;
    break;
}
    
    return 0;
}