//print the reverse of a number

#include<iostream>
using namespace std;

int main(){
    int n = 243, flag = 0;
    while(n != 0){
        flag = n%10;
        // temp = temp + flag;
        cout<<flag;
        n = n/10;
    }
    // cout<<temp<<endl;
    return 0;
}