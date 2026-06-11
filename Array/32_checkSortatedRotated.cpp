#include <iostream>
using namespace std;

bool check(int arr[], int size){
    int count =0;
    for(int i =1;i<size;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[size-1]>arr[0]){
        count++;
    }
    return count<=1;
}


int main() {
    int arr[]={1, 2, 3, 4, 5, 6, 9};
    int arr1[]={1, 2, 3, 11, 5, 6, 9};
    cout<<"Answer is:"<<check(arr, 7)<<endl;
    cout<<"Answer is:"<<check(arr1, 7)<<endl;
    return 0;
}