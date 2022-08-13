/*
A
ZY
ABC
ZYXW
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <=i; j++){
            char ch = 'A' + j;
            cout << ch << " ";    
        }
        cout << endl;
        if(i=i+1){
                for (int k = 0; k <=i; k++){
                    char ch2 = 'Z' - k;
                cout << ch2 << " ";
            }

        }
        cout<<endl;
    }
}