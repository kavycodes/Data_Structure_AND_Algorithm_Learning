#include <iostream>
using namespace std;

int squareRoot(int n){
    int start=0;
    int end=n;
    int mid=start +(end-start)/2;

    int ans=-1;
    while(start<=end){

        int square=mid*mid;
        if(square==n){
            return mid;
        }

        else if(square<n){
            ans = mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start +(end-start)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol){
    double factor=1;
    double ans = tempsol;

    for(int i =0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main() {
    int num;
    cout<<"Enter Interger To find Square Root: ";
    cin>>num;

    int tempsol = squareRoot(num);
    cout<<"Sqauare Root of Number is: "<<morePrecision(num, 3, tempsol);
    return 0;
}