#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1; j++){
            if(j%2==0){
                cout<<"*";
                continue;
            }
            cout<<count++;
        }
        cout<<endl;
    }
    count--;
    for(int i=n; i>=1; i--){
        for(int j=2*i-1; j>=1; j--){
            if(j%2==0){
                cout<<"*";
                continue;
            }
            cout<<count--;
        }
        cout<<endl;
    }
    return 0;
} 