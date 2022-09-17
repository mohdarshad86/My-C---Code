#include<iostream>
using namespace std;

int glo=6;
void sum() {
    int a;
    cout<< glo;
}

int main() {

    int glo=9;
    bool is_true = true;
    glo=78;
    sum();
    cout<<glo<< is_true;
    return 0;

}