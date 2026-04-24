#include <iostream>
using namespace std;
class Pattern
{
public:
    void print(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j << " ";
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