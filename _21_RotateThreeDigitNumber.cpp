//13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter A Number:"<<endl;
    cin>>num;
    int rotate=(num%10)*100+num/10;
    cout<<"Rotated Number= "<<rotate<<endl;
    return 0;
}