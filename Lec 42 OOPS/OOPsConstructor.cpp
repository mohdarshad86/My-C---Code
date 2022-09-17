#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    static int timeToComplete;

    Hero()
    {
        cout << "Simple Constructor called " << endl;
        name = new char[100];
    }

    // Parameterised constructor
    Hero(int health)
    {

        // cout << "this -> " << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {

        // cout << "this -> " << this << endl;
        this->level = level;
        this->health = health;
    }

    // Copy constructor
    Hero(Hero &temp)
    {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }
    int getHealth()
    {
        return health;
    }

    void setName(char name)
    {
        // strcpy(this->name, name);
    }

    static int random()
    {

        // cout<<health<<endl; cant access

        return timeToComplete;
    }

    ~Hero()
    {
        cout << "Destructor called " << endl;
    }
};

int Hero ::timeToComplete = 5;

int main()
{
    // // object creation statically
    // Hero ramesh(10);
    // // cout << "Address of ramesh :" << &ramesh << endl;
    // ramesh.print();

    // // Dynamically
    // Hero *h = new Hero;
    // h->print();

    // Hero temp(10, 'B');

    //

    // Hero S(70, 'C');
    // S.print();

    // // Copy Constructor
    // Hero R(S);

    // R.print();

    // // static
    // Hero a; // Auto destruct call

    // // Dynamic
    // Hero *b = new Hero(); // Manual dest call

    // delete b;

    cout << Hero::timeToComplete << endl;

    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 10;
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;

    return 0;
}