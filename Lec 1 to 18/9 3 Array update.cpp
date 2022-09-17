#include<iostream>
using namespace std;

void update(int arr[], int n) {

    cout<<"Inside the fn"<<endl;
    
    //Upading array
    arr[0]=120;
    
//printing the array
    for(int i=0; i<3; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"Going back to fn"<<endl;
}

int main() {

    int arr[3]= {1, 2, 3};
    update(arr, 3);
    
    //printing th array
    cout<<"Printing the main fn"<<endl;
        for(int i=0; i<3; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}