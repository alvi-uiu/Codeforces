#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int len = 1;

    for (int i = 0; i < 31; i++)
    {
        if ((a & (1 << i)) == (b & (1 << i)))
            len += (1 << i);
        else
            break;
    }

    cout << len << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
