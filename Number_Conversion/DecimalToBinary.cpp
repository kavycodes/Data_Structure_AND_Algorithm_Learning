#include <iostream>
using namespace std;
class DecimalToBinary
{
    int n;

public:
    void setData()
    {
        cout << "Enter The number To convert into Binary:";
        cin >> n;
    }
    void convert()
    {
        int ans = 0;
        int i = 0, m = 1;
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * m) + ans;
            i++;
            n = n >> 1;
            m = m * 10;
        }
        cout << "Answer is:" << ans;
    }
};
int main()
{
    DecimalToBinary Z;
    Z.setData();
    Z.convert();
    return 0;
}