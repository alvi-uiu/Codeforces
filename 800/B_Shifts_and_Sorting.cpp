

#include <bits/stdc++.h>
using namespace std;

inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void Solve()
{
    string str;
    cin >> str;
    int n = str.size();
    int ans = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            k++;
        }
        else if (k)
        {
            ans += (k + 1);
        }
    }

    cout << ans << endl;
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