/*#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"n is "<<n<<endl;
    }

int main(){

    int n;
    cin>>n;

    dummy(n);
    cout<<"no. n is "<<n<<endl;

    return 0;
} */


/*#include<iostream>
using namespace std;

void update(int a) {
    a=a/2;
    cout<<a<<endl;
}

int main() {

    int a = 10;
    update(a);
    cout<<a<<endl;

    return 0;
} // output 10 */

#include<iostream>
using namespace std;

int update(int a) {
    a -= 5;
    return a;
}

int main() {

    int a = 15;
    update(a);
    cout<<a<<endl;

    return 0;
}  // output 15