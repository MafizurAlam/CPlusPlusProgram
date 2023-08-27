//Take Three Positive integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int m,n,o;
    cout<<"Enter First Number: ";
    cin>>m;
    cout<<"Enter Second Number: ";
    cin>>n;
    cout<<"Enter Third Number: ";
    cin>>o;
    if(m>n && m>o){
        cout<<"The Greatest Number is: "<<m<<endl;
    }
    else if(n>m && n>o){
        cout<<"The Greatest Number is: "<<n<<endl;
    }
    else if(m==n==o){
        cout<<"All Numbers are Equal"<<endl;
    }
    else{
        cout<<"The Greatest number is: "<<o<<endl;
    }
    return 0;
}