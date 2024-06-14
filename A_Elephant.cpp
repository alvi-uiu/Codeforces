// And that each person will only have what they endeavoured towards , [53:39]
#include <bits/stdc++.h>

using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long
#define fr(m) for (int i = 0; i < m; i++)
#define fro(m) for (int i = 1; i < m; i++)
#define frj(m) for (int j = 0; j < m; j++)
#define frr(n) for (int i = n; i >= 0; i--)
#define pb push_back
#define pf push_front
#define orr ||
#define nl '\n'
#define nll cout << '\n'
#define mod 1000000007
#define inf (1LL << 62)
#define inff (1 << 30)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define ff first
#define ss second

unordered_map<ll, ll> mp;

inline ll steps(ll n, ll a, ll b, ll c, ll d, ll e)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MAX;

    if (mp.count(n))
        return mp[n];

    ll res = 0;
    res += 1 + min({steps(n - a, a, b, c, d, e), steps(n - b, a, b, c, d, e), steps(n - c, a, b, c, d, e), steps(n - d, a, b, c, d, e), steps(n - e, a, b, c, d, e)});
    return mp[n] = res;
}

int main()
{
    fastio;

    int n, a, b, c, d, e;

    cin >> n;
    a = 1, b = 2, c = 3, d = 4, e = 5;

    cout << steps(n, a, b, c, d, e);

    return 0;
}