#include <iostream>
using namespace std;

class Shop
{
    int itemid[100];
    int itemprice[100];

    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void Shop::setprice(void)
{
    cout << "Enter id of your item no " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}

void Shop::displayprice(void)
{
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "The price of item with id "
                 << itemid[i] << " is " << itemprice[i] << endl;
        }
    }
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();

    return 0;
}