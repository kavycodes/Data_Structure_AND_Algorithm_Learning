#include <iostream>
using namespace std;

int AP(int a, int n, int d){
    int ans = a + (n - 1)*d;
    return ans;
}

int main() {
    int a, n, d;
    cin>> a >> n >> d;
    
    cout<<"Last term is:"<<AP(a, n, d);

    return 0;
}