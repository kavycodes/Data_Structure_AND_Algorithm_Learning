#include <iostream>
using namespace std;

int getSum(int num[], int size){
    int sum=0;
    for(int i = 0; i<size;i++){
        sum = sum + num[i];
    }
    return sum;
}

int main() {
    int size;
    cin>>size;

    int num[100];
    for(int i = 0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Sum of Array Element is:"<<getSum(num, size)<<endl;
    return 0;
}