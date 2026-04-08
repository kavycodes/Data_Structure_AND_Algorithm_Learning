#include <iostream>
using namespace std;
class Number{
    int a;
    public:
        void SetData(){
            cout<<"Enter the value of A:";
            cin>>a;
        }
        void checkNumber(){
            if(a>0){
                cout<<"A is Positive"<<endl;
            }
            else if(a<0){
                cout<<"A is negative"<<endl;
            }
            else{
                cout<<"A is ZERO"<<endl;
            }
        }
};    
int main() {
    Number z;
    z.SetData();
    z.checkNumber();
    return 0;
}