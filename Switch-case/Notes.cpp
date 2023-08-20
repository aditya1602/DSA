#include<iostream>
using namespace std;

int main(){
    int  amount = 330;
    int a,b,c,d;
    for (int i = 1; i<5; i++)
    {
        switch (i)
        {
        case 1:
            a=amount/100;
            amount=amount-(100*a);
            cout<<a<<endl;
            cout<<amount<<endl;
            break;           
        case 2:
            b=amount/50;
            amount=amount-(50*b);
            cout<<b<<endl;
            cout<<amount<<endl;
            break;           
        case 3:
            c=amount/20;
            amount=amount-(20*c);
            cout<<c<<endl;
            cout<<amount<<endl;
            break;            
        case 4:
            d=amount/10;
            amount=amount-(10*d);
            cout<<d<<endl;
            cout<<amount<<endl;
            break;                

        default:
            break;
        }
    };
    cout<<"number of 100rs notes :" << a<<endl; 
    cout<<"number of 50rs notes :" << b<<endl; 
    cout<<"number of 20rs notes :" << c<<endl; 
    cout<<"number of 10rs notes :" << d<<endl; 
};