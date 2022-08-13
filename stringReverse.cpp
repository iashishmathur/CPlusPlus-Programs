#include<iostream>
//#include<string>
using namespace std;
void rev1(string name,int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
        s++;
        e--;
    }
    cout<<name;
}
int main(){
    string str;
    cin>>str;
    int len = str.length();
    //int len = str.size(); we can use both functions like this
    cout<<len<<endl;
    rev1(str, len);
    //cout<<str;
    return 0;
}