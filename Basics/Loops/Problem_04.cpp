#include <iostream>
using namespace std;


class prime
{
    int n;

public:
    void SetData()
    {
        cout << "Enter The number to check prime:";
        cin >> n;
    }
    void checkprime()
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "Not a prime" << endl;
                return;
            }
        }
        cout << "It is prime" << endl;
    }
};


int main()
{
    prime a;
    a.SetData();
    a.checkprime();
    return 0;
}