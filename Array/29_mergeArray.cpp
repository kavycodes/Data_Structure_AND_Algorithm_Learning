#include <iostream>
using namespace std;

int merge(int arr1[], int m, int arr2[], int n, int ans[]){
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else{
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        ans[k]=arr1[i];
        i++;
        k++;
    }

    while(j<n){
        ans[k]=arr1[j];
        j++;
        k++;
    }

    
}

void printArray(int ans[], int size){
    for(int i =0;i<size;i++){
        cout<<ans[i]<<" ";
    }
}

int main() {
    int arr1[]={1, 3, 5, 7, 9};
    int arr2[]={2, 4, 6};

    int ans[10];
    merge(arr1, 5, arr2, 3, ans);
    printArray(ans, 8);
    return 0;
}