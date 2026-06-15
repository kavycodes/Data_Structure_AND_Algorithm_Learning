#include <iostream>
using namespace std;

int getlength(char str[]){
    int count=0;
    for(int i =0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

int main() {
    char str[20];
    cout<<"Enter Your String: "<<endl;
    cin>>str;

    cout<<"String "<<str<<endl;
    cout<<"Length of string: "<<getlength(str);
    
    return 0;
}