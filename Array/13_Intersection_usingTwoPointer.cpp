#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(int arr1[], int arr2[], int size1, int size2){
        vector<int> ans;

        sort(arr1, arr1 + size1);
        sort(arr2, arr2 + size2);

        int i = 0, j = 0;

        while(i < size1 && j < size2){
            if(arr1[i] == arr2[j]){
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
            else if(arr1[i] < arr2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;

    int arr1[] = {1, 2, 2, 3};
    int arr2[] = {2, 2, 3, 4};

    vector<int> result = obj.intersection(arr1, arr2, 4, 4);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
}