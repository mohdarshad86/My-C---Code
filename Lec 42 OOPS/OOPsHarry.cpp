#include <iostream>
using namespace std;

class Binary
{
    string s;
    void check_bin(void);

public:
    void read(void);
    // void check_bin(void); suppose we private this
    void onesComp(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary no " << endl;
    cin >> s;
}

void Binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }

    cout << "Binary no." << endl;
}
void Binary ::onesComp(void)
{
    check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else // if (s.at(i) = '1')
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::display(void)
{
    cout << "Display your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    // Nesting of member function
    Binary b;
    b.read();
    // b.check_bin();
    b.display();
    b.onesComp();
    b.display();

    return 0;
}