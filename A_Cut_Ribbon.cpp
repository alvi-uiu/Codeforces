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

inline ll cut(ll n, ll a, ll b, ll c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN; // wont consider in max fn

    if (mp.count(n))
    {
        return mp[n];
    }

    ll res = 0;
    res += 1 + max({cut(n - a, a, b, c), cut(n - b, a, b, c), cut(n - c, a, b, c)});
    return mp[n] = res;
}

int main()
{
    fastio;
    int t;

    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << cut(n, a, b, c);

    return 0;
}