#include <iostream>
using namespace std;

class Pattern
{
public:
    void print(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i+1; j++){
                cout <<j;
            }
            for(int j=1;j<i;j++){
                cout<<"*";
            }
            for(int j=n;j<=n;j--){
                cout<<j;
            }
            cout << endl;
        }
    }
};



int main()
{
    Pattern z;
    z.print(5);
    return 0;
}