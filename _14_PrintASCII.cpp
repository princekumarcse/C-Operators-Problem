// 6. Write a program which takes a character as an input and displays its ASCII code. 
#include<iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter A Character: ";
    cin>>letter;
    cout<<"ASCII of "<<letter<<" is "<<int(letter);
    return 0;
}