#include <iostream>
using namespace std;

int score = 15;

void a(int &i)
{
    cout << score << " In a" << endl;
    score++;
}
void b(int &i)
{
    cout << score << " In b" << endl;
}

int main()
{
    int i = 5;
    cout << score << " In main " << endl;
    a(i);
    b(i);

    return 0;
}