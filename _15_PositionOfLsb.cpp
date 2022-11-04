// 7. Write a program to find the position of first 1 in LSB. 
#include<iostream>
using namespace std;
int main(){
    int num,one,pos=0;
    cout<<"Enter A Number:";
    cin>>num;
    while(num!=0){
        one=num%10;
        if(one==1)
        pos++;
        num=num>>1;
    }
    cout<<"Position Of 1 is "<<pos;
    return 0;
}