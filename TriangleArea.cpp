#include<iostream>
using namespace std;
int main(){
    float base, height;
    cout<<"Enter the Base of the Triangle: "<<endl;
    cin>>base;
    cout<<"Enter the Height of the Triangle: "<<endl;
    cin>>height;
    float area;
    area= 0.5*base*height;
    cout<<"Area of the Triangle is: "<<area;
    return 0;
}