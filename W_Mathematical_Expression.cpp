#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char ch, ch1;
    cin >> a >> ch >> b >> ch1 >> c;
    if (ch == '+')
    {
        a + b == c ? cout << "Yes" : cout << a + b;
    }
    else if (ch == '-')
    {
        a - b == c ? cout << "Yes" : cout << a - b;
    }
    else if (ch == '*')
    {
        a *b == c ? cout << "Yes" : cout << a * b;
    }
    return 0;
}