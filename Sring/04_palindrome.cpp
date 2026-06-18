#include <iostream>
using namespace std;

int getlength(char str[]){
    int count=0;
    for(int i =0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
bool checkPalindrome(char str[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

int main() {
    char str[20];
    cout<<"Enter Your string: ";
    cin>>str;
    int len=getlength(str);

    cout<<"Palindrome Is(1) or Not(0): "<<checkPalindrome(str, len);

    return 0;
}