#include <iostream>
using namespace std;

int getPivot(int arr[], int size){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int element){

    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==element){
            return mid;
        }

        if(element>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int getans(int arr[], int size, int element){
    int pivot=getPivot(arr, size);
    if(element>=arr[pivot]&&element<=arr[size-1]){
        return binarySearch(arr,  pivot, size-1, element);
    }
    else{
        return binarySearch(arr, 0, pivot-1, element);
    }
}

int main() {
    int arr[]={7, 9, 1, 2, 3};
    
    int element;
    cout<<"Enter the value of Element To find: ";
    cin>>element;

    cout<<"Search Element Present at index: "<<getans(arr, 5, element);
    return 0;
}