#include <iostream>
using namespace std;

int main() {
    char name[20];
    cout<<"What is your name? "<<endl;
    cin>>name;

    name[4]='\0';

    cout<<"My name is "<<name;
    return 0;
}
