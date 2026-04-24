#include <iostream>
using namespace std;

class Pattern
{
    int count =1;
public:
    void print(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout<<count;
                count++;
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