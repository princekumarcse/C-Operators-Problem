// 4. Write a program to swap values of two int variables without using a third variable. 
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter Two Numbers:";
    cin>>num1>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"Swapped Value = "<<num1<<" "<<num2;
    return 0;
}