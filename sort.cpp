#include<iostream>
using namespace std;

int main(){
    int a[6]={1, 5, 4, 3, 7, 6};
    int star=0;
    int end=5;
    while(star<=end){
        swap(a[star], a[end]);
        star++;
        end--;
    }
    cout<<
    return 0;
}

