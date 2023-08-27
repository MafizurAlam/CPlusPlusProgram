//Take Positive integer input and tell if it is divisible 5 or 3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"It is divisible number by 5 or 3";
    }
    else{
        cout<<"it is not divisible number";
    }
    return 0;
}