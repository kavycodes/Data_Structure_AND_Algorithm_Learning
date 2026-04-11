#include <iostream>
using namespace std;

class Fibonacci{
    int n;
    public:
        void setData(){
            cout<<"Enter Number The Print The Fibonacci Series:";
            cin>>n;
        }
        void printSeries(){
            int a=0,b=1;
            cout<<a<<" "<<b;
            for(int i=0;i<=n;i++){
                int Next=a+b;
                cout<<" "<<Next;
                a=b;
                b=Next;
            }
        }
};

int main() {
    Fibonacci Z;
    Z.setData();
    Z.printSeries();
    return 0;
}