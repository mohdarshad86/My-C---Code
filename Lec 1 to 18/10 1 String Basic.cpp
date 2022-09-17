#include<iostream>
#include<string>

using namespace std;



int main(){
    
    
    //Appending
    
 /*   string str;
    
    string s1 = "fam";
    string s2 = "ily";
    
    //s1.append(s2); or
    
    cout<<s1 +s2<<endl;
    
    //or
    
    s1 = s1 + s2;
    cout<<s1; 
    
    cout<<s1[1]; //will give 2nd char ie 'a'
    */
    
    //sorting of string
    
    string s1 = "xdhffjcesortfbayyklkgu";
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;
    
    
    
    return 0;
}