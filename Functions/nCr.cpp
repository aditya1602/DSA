#include<iostream>
using namespace std;

int fact(int c){
    int x=1;
    for (int i = c; i >0; i--)
    {
        x=x*i;
    }
    return x;
}
int ncr(int c,int r){
    int fact_c = fact(c);
    int fact_r = fact(r);
    int diff=c-r;
    int fact_z = fact(diff);
    int ans =fact_c/(fact_r*fact_z);
    cout<<ans<<endl;
    return 0;
}

int main(){
    int c,r;
    cin>>c>>r;
    ncr(c,r);
    
};