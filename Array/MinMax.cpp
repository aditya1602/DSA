#include<iostream>
using namespace std;

int main(){
    int number[5]={4,6,8,12,0};
    int max=0;
    int min=number[0];
    for (int i = 0; i < 5; i++)
    {
        if (number[i]>max)
        {
            max=number[i];
        }
        if (number[i]<min)
        {
            min=number[i];
        }
        
        
    }
    cout<<"Maximum : "<<max<<endl;
    cout<<"Minimum : "<<min<<endl;
    return 0;
};