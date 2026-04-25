#include <iostream>
using namespace std;

class Pattern
{   
public:
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            int value = i;
            for (int j = 1; j <= i; j++)
            {
                cout<<value;
                value++;
                cout<< " ";
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