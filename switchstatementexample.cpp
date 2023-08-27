//write a program to input month number and print total number of days in month using switch case.
#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter the Months Number: ";
    cin>>month;
    switch(month){
        case 1:
            cout<<"Jan- 31 days";
            break;
        case 2:
            cout<<"Feb- 28 days";
            break;
        case 3:
            cout<<"March- 31 days";
            break;
        case 4:
            cout<<"April- 30 days";
            break;
        case 5:
            cout<<"May- 31 days";
            break;
        case 6:
            cout<<"June- 30 days";
            break;
        case 7:
            cout<<"July- 31 days";
            break;
        case 8:
            cout<<"Aug- 31 days";
            break;
        case 9:
            cout<<"Sep- 30 days";
            break;
        case 10:
            cout<<"Oct- 31 days";
            break;
        case 11:
            cout<<"Nov- 30 days";
            break;
        case 12:
            cout<<"Dec- 31 days";
            break;
        default:
            cout<<"Invalid Number";
        
    }
}