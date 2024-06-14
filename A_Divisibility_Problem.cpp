#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int a, b;
    cin >> a >> b;
    int rem = a % b;
    if (rem == 0)
        cout << 0 << "\n";
    else
    {
        cout << b - rem << "\n";
    }
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
