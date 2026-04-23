#include <iostream>
using namespace std;

class Pattern {
public:
    void print(int n) {
        for(int i=n;i>=1;i--) {
            for(int j=1;j<=i;j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern p;
    p.print(4);
    return 0;
}