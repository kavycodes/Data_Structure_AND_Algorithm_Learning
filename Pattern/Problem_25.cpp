#include <iostream>
using namespace std;

class Pattern
{
    int value = 1;

public:
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << value;
                value++;
            }
            cout << endl;
        }
    }
};

int main()
{
    Pattern z;
    z.print(4);
    return 0;
}