#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> intersection(int arr1[], int arr2[], int size1, int size2){
    vector<int> ans;

    for(int i = 0; i < size1; i++){
        int element = arr1[i];

        for(int j = 0; j < size2; j++){
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    return ans;
}

void inputArrayA(int arr[], int size){
    cout << "Enter elements of Array A: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void inputArrayB(int arr[], int size){
    cout << "Enter elements of Array B: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

int main() {
    int arr1[100], arr2[100];
    int size1, size2;

    cout << "Enter number of elements: ";
    cin >> size1 >> size2;

    inputArrayA(arr1, size1);
    inputArrayB(arr2, size2);

    vector<int> result = intersection(arr1, arr2, size1, size2);

    cout << "Intersection: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}