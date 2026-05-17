#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    } 
}

int main() {
    int arr[]={4, 1, 3, 9, 5};
    selectionSort(arr, 5);
    cout<<"Arranged Array is: ";
    for(int i=0;i<5;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}