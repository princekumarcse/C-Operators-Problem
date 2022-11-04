// 9. Write a program to print size of an int, a float, a char and a double type variable 
#include<iostream>
using namespace std;
int main(){
    int x;
    float y;
    char z;
    double a;
    cout<<"Size of Int    = "<<sizeof(x)<<endl;
    cout<<"Size of float  = "<<sizeof(y)<<endl;
    cout<<"Size of char   = "<<sizeof(z)<<endl;
    cout<<"Size of double = "<<sizeof(a)<<endl;
    return 0;
}