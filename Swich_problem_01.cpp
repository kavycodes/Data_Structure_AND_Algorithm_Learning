#include <iostream>
using namespace std;

int main()
{
    int a = 1330;
    switch (1)
    {
    case 1:
        cout << "Notes of 100:" << a / 100 << endl;
        a = a % 100;
    case 2:
        cout << "Notes of 50:" << a / 50 << endl;
        a = a % 50;
    case 3:
        cout << "Notes of 20:" << a / 20 << endl;
        a = a % 20;
    case 4:
        cout << "Notes of 1:" << a / 1 << endl;
        a = a % 1;
    }

    return 0;
}