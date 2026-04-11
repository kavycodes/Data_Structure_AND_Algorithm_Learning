#include <iostream>
using namespace std;

class SumDigits{
    int n;
    public:
        void SetData(){
            cout<<"Enter number:";
            cin>>n;
        }
        void Calculate(){
            int sum=0;
            while(n>0){
                sum += n%10;
                n /= 10;
            }
            cout<<"Sum of digits: "<<sum;
        }
};

int main(){
    SumDigits z;
    z.SetData();
    z.Calculate();
    return 0;
}