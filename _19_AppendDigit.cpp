/*11. Write a program to input a number from the user and also input a digit. 
Append a digit in the number and print the resulting number. 
(Example - number=234 and digit=9 then the resulting number is 2349) */
#include<iostream>
using namespace std;
int main(){
    int num,digit;
    cout<<"Enter A Number:"<<endl;
    cin>>num;
    cout<<"Enter A Digit:"<<endl;
    cin>>digit;
    cout<<"Number after Append Digit= "<<num<<digit<<endl;
    return 0;
}