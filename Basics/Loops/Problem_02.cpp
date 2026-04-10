#include <iostream>
using namespace std;
class Printeven{
    int num;
    public:
        void SetData(){
            cout<<"Enter The number to print the even counting:";
            cin>>num;
        }
        void print(){
            for(int i=2;i<=num;i++){
                if(i%2==0){
                    cout<<i<<endl;
                }    
            }
        }
};
int main() {
    Printeven n;
    n.SetData();
    n.print();
    return 0;
}