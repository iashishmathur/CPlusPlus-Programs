#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5] = {1,3,4,2,6};
    int max = INT_MIN;
    for(int i=0; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}