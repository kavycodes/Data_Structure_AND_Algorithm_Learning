#include <iostream>
using namespace std;

class Pattern
{
public:
    
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            char ch='A'+i-1;
            for (int j = 1; j <= n; j++)
            {
               cout<<ch<<" "; 
            }
            cout << endl; 
        }
    }
};

int main() {
    Pattern z;
    z.print(4);
    return 0;
}