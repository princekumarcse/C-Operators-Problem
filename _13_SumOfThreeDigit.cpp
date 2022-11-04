// 5. Write a program to input a three-digit number and display the sum of the digits. 
#include<iostream>
using namespace std;
int main(){
    int num,sum=0,rem,count=0;
    cout<<"Enter A Number:";
    cin>>num;
    while(num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        count++;
    }
    if(count==3){
    cout<<"Sum of the digit = "<<sum;
    }
    else{
        cout<<"Number is More Than 3 Digit";
    }
    return 0;
}