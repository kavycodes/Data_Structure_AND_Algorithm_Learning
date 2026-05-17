#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int size,int numC, int mid){
    int cowCount = 1;
    int lastPos = arr[0];

    for(int i =0;i<size;i++){
        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==numC){
                return true;
            }
            lastPos=arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int size, int numC){
    sort(arr, arr+size);
    int start = 0;
    int maxi=-1;
    for(int i=0; i<size;i++){
        maxi=max(maxi, arr[i]);
    }
    int end = maxi;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(isPossible(arr, size, numC, mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main() {
    int arr[]={4, 2, 1, 3, 6};
    cout<<"Maximum Distance Btw Cows is: "<<aggressiveCows(arr, 5, 2);
    return 0;
}