#include <iostream>
using namespace std;

class Number{
    int num;
    public:
        void SetData(){
            cout<<"Enter The number to print the counting:";
            cin>>num;
        }
        int printnumber(){
            for(int i=1;i<=num;i++){
                cout<<i<<endl;
            }
        }
};
int main() {
    Number n;
    n.SetData();
    n.printnumber();
    return 0;
}
