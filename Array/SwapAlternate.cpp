#include<iostream>
using namespace std;

int reverseArray(int arr[],int size){
    int position=0;
    while(position<size){
        swap(arr[position],arr[position+1]);
        position+=2;
    };
    return 0;
}

int printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;   
}
int main(){
    int arr[6]={9,8,1,3,7,5};
    reverseArray(arr,6);

    printArray(arr,6);
    return 0;
}