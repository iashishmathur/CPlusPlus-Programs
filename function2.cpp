#include<iostream>
using namespace std;




int main(){
    int n;
    cin>>n;
    int temp=0;
    // while(n!=0){
    //     temp = n%10;
    //     n = n/10;
    // }
    for(int i=1; i<=n; i++)
    if(n==temp){
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"not palindrom"<<endl;
    }
    return 0;
}