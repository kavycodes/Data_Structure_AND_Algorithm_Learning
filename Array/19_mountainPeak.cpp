#include <iostream>
using namespace std;

int peakElement(int arr[], int size){
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
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

    int peak = peakElement(arr, size);
    cout<<"Mountain Peak element in Array: "<<arr[peak];
    return 0;
}