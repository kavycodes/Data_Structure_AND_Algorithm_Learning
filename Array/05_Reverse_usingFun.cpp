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
    int start=0;
    int end=size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
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