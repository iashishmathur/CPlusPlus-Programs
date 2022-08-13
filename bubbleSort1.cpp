#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[] = {1, 3, 2, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
            }
        }
    }
    
    for(int j=0; j<5; j++){
        cout<<arr[j];
    }     
    return 0;
}