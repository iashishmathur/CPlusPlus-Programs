#include <iostream>
using namespace std;
void convert(string S){
    for(int i=0; i<S.length(); i++){
        if(S[i] >= 'a' && S[i] <= 'z'){
          continue;
        }
        else{
            S[i] = S[i] - 'A' + 'a';
        }
    }
    cout<<S<<endl;
}
bool isPal(string S){
    int start = 0;
    int end = S.size()-1;
    while(start <= end)
    {
        if(S[start] == S[end]){
            start++;
            end--;
        }
        else
            return 0;
    }
    return 1;
}
int main()
{
    string S;
    cout << "Enter the string :";
    cin >> S;
    convert(S);
    cout<< S << " is palindrome? " << isPal(S)<<endl; 
    return 0;
}