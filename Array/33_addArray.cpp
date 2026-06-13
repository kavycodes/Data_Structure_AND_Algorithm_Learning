#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    int s = 0;
    int e = size - 1;

    while(s < e) {
        swap(arr[s++], arr[e--]);
    }
}

int findArraySum(int a[], int n, int b[], int m, int ans[]) {
    int i = n - 1;
    int j = m - 1;
    int k = 0;
    int carry = 0;

    while(i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;

        carry = sum / 10;
        ans[k++] = sum % 10;

        i--;
        j--;
    }

    while(i >= 0) {
        int sum = a[i] + carry;

        carry = sum / 10;
        ans[k++] = sum % 10;

        i--;
    }

    while(j >= 0) {
        int sum = b[j] + carry;

        carry = sum / 10;
        ans[k++] = sum % 10;

        j--;
    }

    while(carry != 0) {
        ans[k++] = carry % 10;
        carry /= 10;
    }

    reverse(ans, k);

    return k;
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int a[] = {1,2,3};
    int b[] = {1,2,4};
    int ans[100];

    int size = findArraySum(a, 3, b, 3, ans);

    printArray(ans, 3);

    return 0;
}