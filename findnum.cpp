#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int find = 2;
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2;
    while(s<=e){
        if(arr[m]<find){
            s = m+1;
            m = (s+e)/2;
        }
        else if(arr[m]>find){
            e = m-1;
            m = (s+e)/2;
        }
        else if(arr[m]==find){
            cout<<"Index of find "<<m;
            break;
        }
        // m = (s+e)/2;
    }
    // cout<<m;
return 0;
}