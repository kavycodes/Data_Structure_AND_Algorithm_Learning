#include <iostream>
using namespace std;

class Calculator{
    int a, b;
    char op;
    public:
        void setData(){
            cout<<"Enter The value of A:";
            cin>>a;
            cout<<"Enter The value of B:";
            cin>>b;

        }
        void setOperation(){
            cout<<"Enter the Operation(+,-,*,/,%):";
            cin>>op;
        }
        void calculate(){
           
            switch(op){
                case '+':
                    cout<<"Answer is:"<<a+b;
                    break;
                case '-':
                    cout<<"Answer is:"<<a-b;
                    break;
                case '*':
                    cout<<"Answer is:"<<a*b;
                    break;
                case '/':
                    if (b == 0){
                        cout << "Division by zero not allowed";
                } 
                else{
                    cout << "Answer is: " << a / b;
                }
                    break;
                case '%':
                    if (b == 0){
                        cout << "Division by zero not allowed";
                } 
                else{
                    cout << "Answer is: " << a % b;
                }
                    break;
                deafult:
                    cout<<"Enter Valid Character"<<endl;
            }
        }
};

int main() {
    Calculator Z;
    Z.setData();
    Z.setOperation();
    Z.calculate();
    return 0;
}