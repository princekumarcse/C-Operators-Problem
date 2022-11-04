// 8. Write a program to check whether the given number is even or odd using a bitwise operator
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number:";
    cin>>num;
    if(num&1){
        cout<<"Number is Odd";
    }else{
        cout<<"Number is Even";
    }
    return 0;
}