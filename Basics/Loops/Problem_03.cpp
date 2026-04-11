#include <iostream>
using namespace std;
class factorial
{
    int n;
    int fact;

public:
    void SetData()
    {
        cout << "Enter The number to print factorial:";
        cin >> n;
    }
    void calculate()
    {
        fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial is:" << fact;
    }
};
int main()
{
    factorial a;
    a.SetData();
    a.calculate();
    return 0;
}