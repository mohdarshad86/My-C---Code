#include<iostream>
using namespace std;



int main(){
    
    //DECLARE
    int number[15];
    cout<<"Value at 20 index "<<number[30]<<endl;
    
    //INITIALIZING ARRAY
    
    int second[3] = {5, 7, 11};
    
    // ACCESSESING ELEMENT
    cout<<"Value at 2 index is "<<second[2]<<endl;
    
    int third[15] = {2,7};
    
    int n=15;
    cout<<"\nPrinting the array"<<endl;
    
    for(int i=0; i<n; i++){
    cout<<third[i]<<" ";
    }
    
    int fourth[10]={0};
    n = 10;
    cout<<"\nPrinting the array"<<endl;
    
    for(int i=0; i<n; i++){
    cout<<fourth[i]<<" ";
    } 
    
    int fifth[10]={1};
    n = 10;
    cout<<"\nPrinting the array"<<endl;
    
    for(int i=0; i<n; i++){
    cout<<fifth[i]<<" ";
    } 
    
    return 0;
}