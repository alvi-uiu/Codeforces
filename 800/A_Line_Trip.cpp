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
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    // gas stations :

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        int fuel = arr[i + 1] - arr[i];
        ans = max(ans, fuel);
    }

    // check fuel needed for  0 -> first gas station also :

    ans = max(ans, arr[0] - 0);

    // check the fuel needed of dest and its previous gas st :

    ans = max(ans, 2 * (x - arr[n - 1]));

    cout
        << ans << endl;
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