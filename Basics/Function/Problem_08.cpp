#include <iostream>
using namespace std;

void fibonacci(int n){
    int a = 0, b = 1;

    if(n >= 1){
    cout << a << " ";
    }
    if(n >= 2){
        cout << b << " ";
    }
    for(int i = 3; i <= n; i++){
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
}

int main() {
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}