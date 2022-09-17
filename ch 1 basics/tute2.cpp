#include <iostream>
using namespace std;

int main(){
    int date;
    cin>>date;
    int pm=3000;
    for (int date = 1; date < 30; date++)
    {
        if (date%2==0)
        {
            continue;
        }
        if (pm==0)
        {
            break;
        }
        cout<<"You can go out today"<<endl;
        pm=pm-300;
        
        
    }
    
    return 0;
}