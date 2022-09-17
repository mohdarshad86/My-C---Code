// //1. Compiletime/Static Polymorphism

// #include <iostream>
// using namespace std;

// //(i)function overloading
// class A
// {
// public:
//     void sayHello()
//     {
//         cout << "Say Hello Love babbar :" << endl;
//     }

//     void sayHello(string name)
//     {
//         cout << "Say Hello" << endl;
//     }
//     int sayHello(int n)
//     {
//         cout << "Say Hello" << endl;
//         return 1;
//     }
// };

// //(ii) operator overloading
// class B
// {
// public:
//     int a;
//     int b;

// public:
//     int add()
//     {
//         return a + b;
//     }

//     void operator+(B &obj)
//     {
//         // int val1 = this->a;
//         // int val2 = obj.a;
//         // cout << "Output :" << val2 - val1 << endl;
//         cout << "Hello Babbar" << endl;
//     }

//     void operator()()
//     {
//         cout << "I am bracket " << this->a << endl;
//     }
// };

// int main()
// {
//     A obj;
//     obj.sayHello();

//     B obj1, obj2;
//     obj1.a = 4;
//     obj2.a = 7;
//     obj1 + obj2;

//     obj1();

//     return 0;
// }

// 2. Runtime/Dynamic Polymosrphism

#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()                   // jb tl khud ki implement nhi doge
    {                              // tb tk Aminal wala op 'speaking' dega
        cout << "Barking" << endl; // ab op 'Barking' dega
    }
};

int main()
{

    Dog obj;
    obj.speak();

    return 0;
}