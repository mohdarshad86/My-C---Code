#include <iostream>
#include <list>
using namespace std;

int main()
{ // same as array n vector
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after erase " << endl;
    for (auto i : l)
    {
        cout << i << " ";
    }
    return 0;
}