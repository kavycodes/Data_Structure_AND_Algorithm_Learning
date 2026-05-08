#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int st, int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i =0;i<size;i++){
        if(pageSum+arr[i]<=mid){
            pageSum=pageSum+arr[i];
        }
        else{
            studentCount++;
            if(studentCount>st){
                return false;
            }
            pageSum=arr[i];
        }
        if(arr[i]>mid){
            return false;
        }
    }
    return true;
}

int bookAllocate(int arr[], int size, int st){
    int start=0;
    int sum=0;
    for(int i =0; i<size;i++){
        sum = sum+arr[i];
    }

    int end=sum;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(isPossible(arr, size, st, mid)){
            ans = mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main() {
    int arr[]={10,20, 30, 40};
    cout<<"Minmum Number Of Pages To read by a Student is: "<<bookAllocate(arr, 4, 2);
    return 0;
}