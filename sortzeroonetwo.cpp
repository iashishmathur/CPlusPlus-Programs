#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortOneTwo(int arr[],int n){
    int left=0;
    while(arr[left]<arr[left+1])
    {
    while(arr[left]<arr[left+1]){
        left++;
    }
    while(arr[left]>arr[left+1]){
        swap(arr[left], arr[left+1]);
        left++;
    }
    left++;
    }
}

int main(){
int arr[5] = {1, 0, 2, 0, 1};
    sortOneTwo(arr, 5);
    printArray(arr, 5);
    return 0;
}