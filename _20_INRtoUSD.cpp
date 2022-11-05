// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD. 
#include<iostream>
using namespace std;
int main(){
    int INR;
    cout<<"Enyter Ammont in INR:"<<endl;
    cin>>INR;
    float USD=(1/76.23)*INR;
    cout<<INR<<" in USD  = "<<USD;
    return  0;
}