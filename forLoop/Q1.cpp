#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int size = std::to_string(n).length();
    int product=1,sum=0;

    for (int i = 0; i <size; i++)
    {
        int a=(n%10);
        n=(n/10);

        product *= a;
        cout<<product<<endl;
        sum += a;     
        cout<<sum<<endl;   
    }

    cout<<product-sum<<endl;
     
    
};