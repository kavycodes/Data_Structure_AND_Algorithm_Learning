#include <iostream>
using namespace std;

int move(int arr[], int size){
    int nonZero=0;
    for(int j=0;j<size;j++){
        if(arr[j]!=0){
            swap(arr[j], arr[nonZero]);
            nonZero++;
        }
    }
}


void printArray(int ans[], int size){
    for(int i =0;i<size;i++){
        cout<<ans[i]<<" ";
    }
}

int main() {
    int arr[]={0,1,0,3,12};
    move(arr, 5);

    printArray(arr, 5);
    return 0;
}