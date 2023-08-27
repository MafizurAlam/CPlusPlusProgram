#include<iostream>
using namespace std;
int main(){
    float cp;
    cout<<"Enter the Cost Price of the product: ";
    cin>>cp;
    float sp;
    cout<<"Enter the Selling Price of the Product: ";
    cin>>sp;
    if(sp>cp){
        cout<<"You are in Profit: "<<sp-cp;
    }
    else if(sp==cp){
        cout<<"No Profit, No Loss: "<<sp-cp;
    }
    else{
        cout<<"You are in Loss: "<<cp-sp;
    }
    return 0;
}