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
    string s;
    cin >> s;

    string GS = "codeforces";
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (GS[i] != s[i])
            cnt++;
    }

    cout << cnt << "\n";
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