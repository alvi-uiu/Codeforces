/*

And that each person will only have what they endeavoured towards , [53:39]

and that ˹the outcome of˺ their endeavours will be seen ˹in their record˺ , [53:40]

then they will be fully rewarded . [53:41]

*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void Solve()
{
}

int32_t main()
{
    fast_io();

    string s;
    cin >> s;
    string match = "hello";
    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == match[cnt])
        {
            cnt++;
            if (cnt == 5)
                break;
        }
    }

    if (cnt == 5)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}