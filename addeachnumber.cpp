#include<iostream>
using namespace std;

int main(){
    int n = 456, sum=0, temp=0;
    while(n!=0){
        temp = n%10;
        sum = sum + temp;
        n = n/10;
    }
    cout<<sum<<endl;
    return 0;
}