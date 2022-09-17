#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";

    m.insert({5, "bheem"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 13 :" << m.count(13) << endl;

    m.erase(13); // element delete
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5); // will print index

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl; // derefrence krke 5 print
    }
    return 0;
}