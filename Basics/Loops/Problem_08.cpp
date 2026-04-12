#include <iostream>
using namespace std;

class Palindrome{
    int n;
    public:
        void SetData(){
            cout<<"Enter number:";
            cin>>n;
        }
        void Check(){
            int original=n, rev=0;
            while(n>0){
                rev = rev*10 + (n%10);
                n /= 10;
            }
            if(original==rev)
                cout<<"Palindrome";
            else
                cout<<"Not Palindrome";
        }
};

int main(){
    Palindrome z;
    z.SetData();
    z.Check();
    return 0;
}