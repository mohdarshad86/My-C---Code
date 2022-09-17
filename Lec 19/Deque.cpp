#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d(3, 5);

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }

    // d.pop_back();
    // d.pop_front();

    cout << endl;

    cout << "print 1st index element " << d.at(1) << endl;
    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    cout << " empty or not " << d.empty() << endl;

    cout << "before erase " << d.size() << endl;

    // d.erase(d.begin(), d.end()); //all gone
    d.erase(d.begin(), d.begin() + 3); // 3 element from start r gone
    cout << "after erase " << d.size() << endl;
    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}