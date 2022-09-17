#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s= "473542709";

sort(s.begin(),s.end(), greater<int>());
cout<<s;
    return 0;
}