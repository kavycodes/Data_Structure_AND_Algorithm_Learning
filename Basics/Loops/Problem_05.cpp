#include <iostream>
using namespace std;
class SumEven{
    int n;
    int sum=0;
    public:
        void SetData(){
        cout << "Enter The number to Sum Even:";
        cin >> n;
        }      
        void calculate(){
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    sum=sum+i;
                }
            }
            cout<<"Sum is:"<<sum;
        }
};
int main() {
    SumEven z;
    z.SetData();
    z.calculate();
    return 0;
}