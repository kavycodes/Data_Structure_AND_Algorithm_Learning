#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int element){
    int start=0;
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
        else if(element<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int element){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==element){
            ans=mid;
            start=mid+1;
        }
        else if(element>arr[mid]){
            start=mid+1;
        }
        else if(element<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int main() {
    int arr[]={1,2,3,3,3,3,3,3,3,5};
    cout<<"First Occurance is: "<<firstOcc(arr, 10, 3)<<endl;
    cout<<"Last Occurance is: "<<lastOcc(arr, 10, 3)<<endl;
    return 0;
}