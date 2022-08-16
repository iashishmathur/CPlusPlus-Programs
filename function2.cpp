#include<iostream>
using namespace std;

string isPal(int num){
    int temp = 0, sum = 0, num1;
    num1 = num; //creating the copy of the number
    while(num!=0){
        temp = num % 10;
        sum = sum*10 + temp;
        num = num/10;
    }
    cout<<"is "<<num1<<" Palindrome? ";
    if(num1 == sum){
        
        return "Yes";
    }
    else{
        return "No";
    }
}
int main(){
    int n;
    cout<<"Enter the No. to check the no. is Palindrome or Not :";
    cin>>n; 
    cout<<isPal(n)<<endl;
    return 0;
}