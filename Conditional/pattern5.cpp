// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while (i<=n)
//     {   
//         int j=1;
//         int count=i;
//         while (j<=i)
//         {   
//             cout<<count<<" ";
//             j++;
//             count--;
//         }
//         i++;
//         cout<<endl;
//     };
    
// };


//Alterante method

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {   
        int j=1;
        while (j<=i)
        {   
            cout<<(i-j+1)<<" ";
            j++;
        }
        i++;
        cout<<endl;
    };
    
};
