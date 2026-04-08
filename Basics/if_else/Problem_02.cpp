#include <iostream>
using namespace std;
class number{
    int a, b;
    public:
        void SetData(){
            cout<<"Enter the value of A:";
            cin>>a;
            cout<<"Enter the value of B:";
            cin>>b;
        }
        void checkgreater(){
            if(a>b){
                cout<<"A is greater"<<endl;
            }
            else if(b>a){
                cout<<"B is greater"<<endl;
            }
            else{
                cout<<"Both are equal"<<endl;
            }
        }
};
int main() {
    number z;
    z.SetData();
    z.checkgreater();
    return 0;
}