//Take Positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"This is divisible by 3 or 5 but not divisible by 15";
        }
        else{
        cout<<"Not Matching the condition";
        }
    }
    else{
        cout<<"Not Matching the Condition";
    }
    return 0;
}