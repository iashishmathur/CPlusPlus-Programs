#include<iostream>
using namespace std;

int isPal(int n){
    int rem=0, temp=0;
    while(n!=0){
        rem = n%10;
        temp = temp*10+rem;
        n = n/10;
    }
    return temp;
}
void isPrime(int result){
    bool flag=0;
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
}
int main(){
    int num;
    cin>>num;
    int result = isPal(num);
    cout<<result<<endl;
    isPrime(result);
    return 0;
}