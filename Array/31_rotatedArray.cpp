#include <iostream>
using namespace std;

int rotate(int arr[], int size, int k){
    int temp[100];
    for(int i=0;i<size;i++){
        temp[(i+k)%size]=arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[]={1, 3, 11, 19};

    rotate(arr, 4, 2);
    printArray(arr, 4);
    return 0;
}