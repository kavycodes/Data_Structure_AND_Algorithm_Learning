#include <iostream>
using namespace std;
class Check_Character{
    char ch;
    public:
        void SetData(){
            cout<<"Enter the value of A:";
            cin>>ch;
        }
        void Check(){
            if(ch>='A'&&ch<='Z'){
                cout<<"This is Upper Case"<<endl;
            }
            else if(ch>='a'&&ch<='z'){
                cout<<"This is Lower Case"<<endl;
            }
            else if(ch>='0'&&ch<='9'){
                cout<<"This is Intergers"<<endl;
            }
         }
};
int main() {
    Check_Character z;
    z.SetData();
    z.Check();
    return 0;
}