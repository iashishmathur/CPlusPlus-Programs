#include<iostream>
using namespace std;

int main(){
    int num, result = 0, rem = 0;
    cin>>num;
    bool flag = 0;
    while(num!=0){
        rem = num%10;
        result = result*10 + rem;
        num = num/10;
    }
    for(int i=2; i < result; i++){
        if(result%i==0){
            flag = 1;
        }
    }
    cout<<flag<<endl;
    if(flag==1){
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }
    return 0;
}