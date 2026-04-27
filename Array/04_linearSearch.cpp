#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
        if(arr[i]==element){    
            return 1;
        }
    }
    return 0;
}

int main() {
    int element;
    cout<<"Enter Element to Search:";
    cin>>element;
    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    bool found = linearSearch(arr, 10, element);
    if(found){
        cout<<"Element is Found"<<endl;
    }
    else{
        cout<<"Element is Not Found"<<endl;
    }
    
    return 0;
}