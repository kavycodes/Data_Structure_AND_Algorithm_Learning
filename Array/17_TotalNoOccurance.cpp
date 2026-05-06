#include <iostream>
using namespace std;

int countOcc(int arr[], int size, int element){
    int count =0;
    for(int i = 0; i<size; i++){
        if(arr[i]==element){
            count++;
        }
    }
    return count;
}

void inputArray(int arr[], int size){
    cout<<"Enter Element of Array:";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
}

int main() {
    int arr[100];
    int size;
    cout<<"Enter Number of Element In Array: ";
    cin>>size;
    inputArray(arr, size);
    int element;
    cout<<"Enter Element to find its Occurance in Array: ";
    cin>>element;
    cout<<"Total Number of occurance is: "<<countOcc(arr, size, element);
    return 0;
}