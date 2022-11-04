//10. Write a program to print a given number without its last digit. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number :";
    cin>>num;
    cout<<"The Number "<<num<<" Without last digit is "<<num/10;
    return 0;
}