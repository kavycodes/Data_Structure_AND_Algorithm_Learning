#include <iostream>
using namespace std;

void reverse(char str[], int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int getlength(char str[]){
    int count=0;
    for(int i =0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

int main() {
    char str[20];
    cout<<"Enter Your string: ";
    cin>>str;
    int len=getlength(str);
    reverse(str,len);

    cout<<"Reverse is: "<<str;
    return 0;
}