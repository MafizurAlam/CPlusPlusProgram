//Given the Marks of the student. If the Marks are greater than 33 print the result as pass otherwise fail without using if-else statement.
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the Marks: ";
    cin>>marks;
    (marks>33)? cout<<"pass":cout<<"Fail";
    return 0;
}