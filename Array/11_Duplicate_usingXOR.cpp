#include <iostream>
using namespace std;

void inputArray(int arr[], int size){
    cout<<"Enter Element of Array:";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
}

int duplicate(int arr[], int size){
    
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<size; i++ ){
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<size;i++ ){
    	ans = ans^i;
    }
    return ans;
}

int main() {
    int arr[100];
    int size;
    cout<<"Enter Number elements in array:";
    cin>>size;

    inputArray(arr, size);

    duplicate(arr, size);
    return 0;
}