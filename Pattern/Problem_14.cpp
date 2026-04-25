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
            for (int j = 1; j <= n; j++)
            {
                ch=65+i+j-2;
                cout<<ch<<" ";
                ch++; 
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern z;
    z.print(3);
    return 0;
}