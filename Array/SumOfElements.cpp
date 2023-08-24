#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int sum=0;
    int number[100];
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>number[i];
    }
    for (int k = 0; k < size; k++)
    {
        sum+=number[k];
    }
    cout<<"sum : "<<sum<<endl;
    return 0;
};