//Take Positive integer input and tell if it is a three digit number or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Three digit Number: "<<endl;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"It is a Three Digit Number";
    }
    else{
        cout<<"It is not Three Digit Number";
    }
    return 0;
}