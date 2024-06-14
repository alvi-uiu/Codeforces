#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1 = "I hate that ";
    string s2 = "I love that ";

    int n;
    cin >> n;

    int original = n;
    int i = 1;
    n--;
    while (n--)
    {
        if (i % 2 != 0)
            cout << s1;
        else
        {
            cout << s2;
        }
        i++;
    }

    if (original % 2 != 0)
        cout << "I hate it";
    else
        cout << "I love it";

    return 0;
}