#include<iostream>
using namespace std;
int main(){
    int n, num=1, mul = 1;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for (int k = 1; k <=i; k++)
        {
            mul=num*2;
            cout<<mul<<" ";
            // cout<<" ";
            num++;
            // cout<<"*"<<" ";
        }
        // for(int j=1; j<n-i; j++){
        //     cout<<" ";
        // }
        cout<<endl;
    }
    
    return 0;
}