/*

And that each person will only have what they endeavoured towards , [53:39]

and that ˹the outcome of˺ their endeavours will be seen ˹in their record˺ , [53:40]

then they will be fully rewarded . [53:41]

*/

#include <bits/stdc++.h>
using namespace std;

inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void Solve()
{
    int x;
    cin >> x;
    int ans = 0;
    int y = 0;
    for (int i = 1; i < x; i++)
    {
        int k = gcd(x, i) + i;
        if (ans < k)
        {
            ans = k;
            y = i;
        }
    }

    cout << y << endl;
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }

    return 0;
}