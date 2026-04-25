#include <iostream>
using namespace std;

class Pattern
{
public:
    
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                char ch='A'+j-1;
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