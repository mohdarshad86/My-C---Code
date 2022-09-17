#include <iostream>
using namespace std;

class student
{
private:
    string name;

public:
    int age;
    bool gender;

    student() // NO Parameter, default
    {
        cout << "Default COnstructor" << endl;
    }

    student(string s, int a, int g) // Parameterised CONSTRUCTOR
    {
        cout << "Parameterised CONSTRUCTOR" << endl;
        name = s;
        age = a;
        gender = g;
    }

    void setName(string s) // setter fn
    {
        name = s;
    }

    student(student &a) // Deep Copy
    {
        cout << "Copy CONSTRUCTOR" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student()
    {
        cout << "Destructor called" << endl;
    }

    void getName()
    {
        cout << name << endl;
    }

    void printinfo()
    {
        cout << "Name :";
        cout << name << endl;
        cout << "Age :";
        cout << age << endl;
        cout << "Gender :";
        cout << gender << endl;
    }

    bool operator==(student a)
    {

        if (name == a.name && age == a.age && gender == a.gender)
            return true;
    }
};

int main()
{
    // student a;
    // a.name = 'Tim';
    // a.age = 20;
    // a.gender = 1;

    // OR

    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "Name :";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << "Age :";
    //     cin >> arr[i].age;
    //     cout << "Gender :";
    //     cin >> arr[i].gender;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printinfo();
    // }
    // arr[0].getName();

    student a("Urvi", 20, 1); // Para constructor
    // a.printinfo();

    student b("Rahul", 21, 0); // Default

    student c = a; // Copy Constructor

    if (c == a)
        cout << "Same" << endl;

    else
        cout << "Not Same" << endl;

    return 0;
}