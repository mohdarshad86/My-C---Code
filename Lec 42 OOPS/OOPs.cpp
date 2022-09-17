#include <iostream>
using namespace std;

class Hero
{
    // properties
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // //CREATION OF OBJECT
    // Hero ramesh;

    // cout << "Size : " << sizeof(ramesh) << endl;

    // //  ramesh.health = 70;
    // //  cout << "health is :" << ramesh.health << endl;

    // ramesh.level = 'A';
    // cout << "level is :" << ramesh.level << endl;

    // cout << "Ramesh health before set is :" << ramesh.getHealth() << endl;

    // ramesh.setHealth(70);
    // cout << "Ramesh health after set is :" << ramesh.getHealth() << endl;

    // Static allocation

    Hero a;

    cout << "Level is :" << a.level << endl;
    cout << "Health is :" << a.getHealth() << endl;

    // Dynamically

    Hero *b = new Hero;

    b->setLevel('A');
    b->setHealth(70);

    cout << "Level is :" << (*b).level << endl; // or
    cout << "Level is :" << b->level << endl;

    cout << "Health is :" << (*b).getHealth() << endl; // or
    cout << "Health is :" << b->getHealth() << endl;
    return 0;
}