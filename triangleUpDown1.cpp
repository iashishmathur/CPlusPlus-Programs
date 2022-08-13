#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j<i)
                cout<<count++<<"*";
            else
                cout<<count++;
        }
        cout<<endl;
    }
    count=count-n;
    //cout<<count<<endl;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            if(j<i)
                cout<<count++<<"*";
            else
                cout<<count++;
        }
        count=(count+1)-2*i;
        cout<<endl;
    }
    return 0;
} 