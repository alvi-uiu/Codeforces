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

inline void solve()
{
}

int main()
{
    fastio;

    int n, m;
    cin >> n >> m;
    int tiles;

    if (n % 2 == 0)
    {
        tiles = m * (n / 2); // m* tile needed for one row
    }
    else
    {
        tiles = m * (n / 2) + (m / 2); // m* tile needed for one row + vertically filled the empty one col
    }

    cout << tiles << "\n";

    return 0;
}