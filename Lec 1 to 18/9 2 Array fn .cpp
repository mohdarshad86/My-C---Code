#include<iostream>
using namespace std;

void printarray(int arr[], int size) {

    cout<<"Printing the array "<<endl;
    
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}

int main() {

    int third[15]= {2, 7};
    int n =15;
    printarray(third, 15);

    int fourth[10]= {0};
    n = 10;
    printarray(fourth, 10);

    int fifth[10]= {1};
                   n = 10;
    printarray(fifth, 10);
    
    char ch[5] ={'a','b','c','r','p'};
    cout<<ch[3]<<endl;
    
    for(int i=0; i<5; i++){
    cout<<ch[i]<<" ";
    }
    
    double fdouble[5];
    float ffloat[6];
    bool fbool[9];

    return 0;
}