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

int main() {
    int arr[]={4, 5, 6, 7, 0, 1};

    cout<<"Pivot Element in Array is present At index: "<<getPivot(arr, 6);

    return 0;
}