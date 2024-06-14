#include <bits/stdc++.h>

using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long
#define nl '\n'

inline void solve()
{
    ll a, b;
    cin >> a >> b;

    int diff = abs(a - b);

    int cnt = diff / 10; // how many 10 needed to cover the diff

    if (diff % 10 != 0) // if the diff is not 10,20,30 like not multiples of 10, then you need to add extra 10 to reach there
        cnt++;

    cout << cnt << "\n";
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
