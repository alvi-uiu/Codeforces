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

    int limit = 24 * 60;
    int n, t;
    cin >> n >> t;
    int cur_sum = 20 * 60;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int time = i * 5;
        cur_sum += time;
        if ((cur_sum + t) <= limit)
        {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}