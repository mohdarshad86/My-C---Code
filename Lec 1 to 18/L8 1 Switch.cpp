#include<iostream>
using namespace std;



int main() {

    /*//  int num = 2;
      char ch = '1';
      switch(ch){
      case 1: cout<<"First"<<endl;
      break; // b reak is must wrna aage wala bhi execute hoga

    //  case 2: cout<<"Second"<<endl;
      case '1': cout<<"Chara cter 1"<<endl;
      break;

      default: cout<<"It is default case"<<endl;
      }
      cout<<endl; */

    int a, b;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;

    switch(op) {
    case '+':
        cout<<(a+b)<<endl;
        break;
    case '-':
        cout<<(a-b)<<endl;
        break;
    case '*':
        cout<<(a*b)<<endl;
        break;
    case '/':
        cout<<(a/b)<<endl;
        break;
    case '%':
        cout<<(a%b)<<endl;
        break;

    default:
        cout<<"Invalid operation";
        }

            return 0;
    }