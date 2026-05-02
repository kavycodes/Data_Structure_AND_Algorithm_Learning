#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element){
    int start = 0;
    int end= size-1;

    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==element){
            return mid;
        }

        // Go to right
        if(element>arr[mid]){
            start=mid+1;
        }
        // go to left
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
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
    cout<<"Enter Number elements in array:";
    cin>>size;

    inputArray(arr, size);
    int element;
    cout<<"Enter Element To search: ";
    cin>>element;

    int index=binarySearch(arr, size, element);

    cout<<"Element Present at Index: "<<index;
    return 0;
}