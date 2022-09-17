#include<iostream>
using namespace std;

//BITWISE OPERATOR

int main() {

  /*  int a =4;
    int b= 6;
    cout<<"a&b ="<<(a&b)<<endl;
    cout<<"a|b ="<<(a|b)<<endl;
    cout<<"~a ="<<(~a)<<endl;
    cout<<"a^b ="<<(a^b)<<endl;
    cout<<endl;
    
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl; */
    
  /*  int i =7;
    
    cout<<(++i)<<endl;
    // 8
    cout<<(i++)<<endl;
    // 8, 9
    cout<<(i--)<<endl;
    // 9, 8
    cout<<(--i)<<endl; */
    // 8, 7
    
  /*  int a, b=1;
    if(++a)
    cout<<b;
    else
    cout<<++b;
    cout<<endl;*/
    
   /* int a=1, b=2;
    
    if(a-->0 && ++b>2){
    cout<<"Stage1-inideif"<<endl;
    }
    else{
    cout<<"stage2-inside else";
    }
    cout<<a<<" "<<b<<endl; //output s1 & 0 3
    
    int num = 3;
    cout<<(25*(++num)); // 100 */
    
    int a = 1;
    int b = a++;
    int c = ++a;
    
    cout<<b;
    cout<<c; // output 1 3
    
    

    return 0;
}