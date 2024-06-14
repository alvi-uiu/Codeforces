#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hr = 21;
    int mn = 0;

    int k;
    cin >> k;

    while (k--)
    {
        mn++;
        if (mn == 60)
        {
            hr++;
            mn = 0;
        }
    }

    cout << hr << ":";
    if (mn < 10)
        cout << 0 << mn;
    else
        cout << mn;

    return 0;
}