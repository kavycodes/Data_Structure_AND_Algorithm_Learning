#include <iostream>
using namespace std;

void inputArray(int arr[], int size){
    cout<<"Enter Element of Array:";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
}


void printArray(int arr[], int size){
    cout<<"Array is after swap:";
    for(int i = 0; i<size; i++){
        cout<<" "<<arr[i];
    }
}

void reverse(int arr[], int size){

    for(int i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
      
}

int main() {
    int arr[100];
    int size;
    cout<<"Enter Number elements in array:";
    cin>>size;

    inputArray(arr, size);

    reverse(arr, size);

    printArray(arr, size);
   

    return 0;
}