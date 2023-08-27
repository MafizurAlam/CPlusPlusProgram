//Write a Program to create a calculator that performs basic arithmetic operations(add,subtract,multiplication and divide) using switch case and functions. The calculator should input two numbers and an operator from user
#include<iostream>
using namespace std;
int main(){
    int x,y;
    char op;
    cout<<"Enter the Problem: ";
    cin>>x>>op>>y;
    switch(op){
        case '+':
            cout<<x+y;
            break;
        case '-':
            cout<<x-y;
            break;
        case '*':
            cout<<x*y;
            break;
        case '/':
            cout<<x/y;
            break;
        default:
            cout<<"Invalid Operator";
    }
}