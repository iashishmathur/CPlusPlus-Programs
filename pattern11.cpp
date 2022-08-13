/*
__________

   *
  **
 ***
****
__________
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int space = n;
    for(int i=1; i<=n; i++){
        for (int space = n-i; space; space--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }        
        cout<<endl;
    }
    return 0;
}