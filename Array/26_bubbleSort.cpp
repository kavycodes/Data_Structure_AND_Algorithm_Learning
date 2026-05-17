#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[]={4, 1, 3, 9, 5};
    bubbleSort(arr, 5);
    cout<<"Arranged Array is: ";
    for(int i=0;i<5;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}