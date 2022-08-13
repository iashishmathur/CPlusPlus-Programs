#include<iostream>
using namespace std;
int main(){
    int arr[8] = {2,2,3,3,2,1,4,5};
    // int dup = 0;
    cout<<endl<<"Duplicate Numbers : ";
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i] == arr[j]){
                    cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}