#include <iostream>
using namespace std;

class Pattern
{
    char ch;

public:
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                ch = 'A' + i - 1;
                cout << ch << " ";
            }
            cout << endl;
        }
    }
};


int main()
{
    Pattern z;
    z.print(3);
    return 0;
}