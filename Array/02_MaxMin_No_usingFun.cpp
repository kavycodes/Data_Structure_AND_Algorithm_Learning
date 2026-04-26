// Finding Maximum and Minimum value by using function
#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int getMax(int num[], int size){
    int maximum= INT_MIN;
    for(int i = 0;i<size;i++){
        maximum=max(maximum, num[i]);
    }
    return maximum;
}

int getMin(int num[], int size){
    int minimum= INT_MAX;
    for(int i = 0;i<size;i++){
        minimum=min(minimum, num[i]);
    }
    return minimum;
}
int main() {
    int size;
    cin>>size;

    int num[100];
    for(int i = 0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maxium Value is:"<<getMax(num, size)<<endl;
    cout<<"Minmum Value is:"<<getMin(num, size)<<endl;
    return 0;
}