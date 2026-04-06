#include <iostream>
using namespace std;
class Triangle{
    public:
        void CheckTriangle(int a, int b, int c){
            if(a <= 0 || b <= 0 || c <= 0){
            cout <<"Invalid sides"<<endl;
            }
            else if(a+b>c && a+c>b && b+c>a){
            cout <<"It is a triangle"<<endl;
            }
            else{
            cout <<"Not a triangle"<<endl;
            }
        }
};
int main() {
    Triangle z;
    z.CheckTriangle(12, 9, 7);
    return 0;
}
