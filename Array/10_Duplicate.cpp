#include <iostream>
using namespace std;

void inputArray(int arr[], int size){
    cout<<"Enter Element of Array:";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
}

void duplicate(int arr[], int size){
    for(int i = 0; i < size; i++){

        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                cout<<"Duplicate Number is: "<<arr[i];
                return;
            }
        }

    }
}

int main() {
    int arr[100];
    int size;
    cout<<"Enter Number elements in array:";
    cin>>size;

    inputArray(arr, size);

    duplicate(arr, size);
    return 0;
}