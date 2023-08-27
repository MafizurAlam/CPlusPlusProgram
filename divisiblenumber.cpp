//Take Positive integer input and tell if it divisible by 5 and 3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"It is Divisible by 5 and 3";
    }
    else{
        cout<<"It is not Divisible by 5 and 3";
    }
    return 0;
}