#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
    int arr[]={4, 1, 2, 0, 11};
    reverseArray(arr, 5);
    cout<<"Array After Reverse: ";
    printArray(arr, 5);

    return 0;
}