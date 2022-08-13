#include <iostream>
using namespace std;
int main()
{
    string S;
    cout << "Enter the paranthesis :";
    cin >> S;
    cout << S;
    int start = 0;
    int count = 0;
    int end = S.size();
    while (start <= end)
    {
        if (S[start] != S[end])
        {
            count++;
            start++;
            end--;
        }
        else
        {
            start++;
        }
    }
    cout<<" Number of balanced paranthesis : "<<count<<endl;
    return 0;
}