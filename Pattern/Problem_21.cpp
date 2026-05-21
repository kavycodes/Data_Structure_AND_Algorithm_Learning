#include <iostream>
using namespace std;

class Pattern
{
public:
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << "*";
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