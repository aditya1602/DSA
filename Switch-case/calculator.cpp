#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    cout<<"enter the value of b :"<<endl;
    cin>>b;

    cout<<"Enter the operation :"<<endl;
    char op;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    default:
        cout<<"invalid operator"<<endl;
        break;
    }

};