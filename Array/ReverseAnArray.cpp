#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;

    int arr1[100];
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr1[i];
    }
    int arr2[100];
    int seq=size-1;
    for (int k = 0; k < size; k++)
    {
        arr2[k]=arr1[seq];
        seq--;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    return 0;
};