#include <iostream>
#include <math.h>
using namespace std;
class BinaryToDecimal
{
    int n;

public:
    void setData()
    {
        cout << "Enter The number To Convert From Binary To Decimal:";
        cin >> n;
    }
    void convert()
    {
        int ans = 0, i = 0;
        while (n != 0)
        {
            int digit = n % 10;
            if (digit == 1)
            {
                ans = digit + pow(2, i);
            }
            n = n / 10;
            i++;
        }
        cout << "Decimal Number is:" << ans;
    }
};

int main()
{
    BinaryToDecimal z;
    z.setData();
    z.convert();
    return 0;
}
