//reverse array using 2 pointer approach

#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e = n-1;
    while(s<=e){
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}