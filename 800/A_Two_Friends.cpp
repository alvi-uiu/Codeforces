

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
    int n;
    cin >> n;
    int arr[n];
    bool FR = false;
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i;
        if (mp[i] == arr[i])
        {
            FR = true; // if a is friend of b and b is also friend of a, so no need to invite further
        }
    }

    if (FR)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 3 << "\n"; // a -> b -> c ( at least 3 people must be invited )
    }

    return;
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