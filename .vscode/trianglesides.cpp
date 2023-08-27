//Take Three numbers input and tell if they can be the sides of a triangle
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the First side: ";
    cin>>a;
    cout<<"Enter the Second side: ";
    cin>>b;
    cout<<"Enter the Third side: ";
    cin>>c;
    if((a+b>c)&&(b+c>a)&&(a+c>b)){
        cout<<a<<","<<b<<","<<c <<" "<<"Can be the sides of a Triangle";
    }
    else{
        cout<<"They can not be the sides of the Triangle";
    }
    return 0;
}