#include <iostream>
using namespace std;

class Pattern
{
    char ch='A';
    
public:
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                
                cout << ch << " ";
                ch++;
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