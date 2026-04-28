#include <iostream>
using namespace std;

void inputArray(int arr[], int size){
    cout<<"Enter Element of Array:";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
}


void unique(int arr[], int size){
    for(int i = 0; i < size; i++){
        int count = 0;

        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            cout<<"Unique Number is: "<<arr[i];
            return;
        }
    }
}

int main() {
    int arr[100];
    int size;
    cout<<"Enter Number elements in array:";
    cin>>size;

    inputArray(arr, size);

    unique(arr, size);

    return 0;
}