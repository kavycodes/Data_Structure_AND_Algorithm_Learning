#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int element){
    int start = 0;
    int end=size-1;

    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==element){
            ans=mid;
            end=mid-1;
        }
        else if(element>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int element){
    int start = 0;
    int end = size -1;

    int mid=(start+end)/2;
    int ans2=-1;
    while(start<=end){
        if(arr[mid]==element){
            ans2 = mid;
            start= mid+1;
        }
        else if(element>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans2;
}

int countOcc(int first, int last){
    int count;
    count=last-first+1;
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
    int first=firstOcc(arr, size, element);
    int last=lastOcc(arr, size, element);
    cout<<"Total Number of occurance is: "<<countOcc(first, last);
    return 0;
}