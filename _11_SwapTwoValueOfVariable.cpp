//3. Write a program to swap values of two int variables 
#include<iostream>
using namespace std;
int main(){
    int num1,num2,temp;
    cout<<"Enter Two Numbers:";
    cin>>num1>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"Swapped Value = "<<num1<<" "<<num2;
    return 0;
}