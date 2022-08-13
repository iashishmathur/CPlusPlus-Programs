#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a:" << a << endl;
        }
        else
        {
            cout << "c:" << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b:" << b << endl;
        }
        else
        {
            cout << "c:" << c << endl;
        }
    }
    return 0;
}