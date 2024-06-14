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
    int i = 9;
    int cntA = 0, cntB = 0, cntC = 0;
    while (i--)
    {
        char ch;
        cin >> ch;
        if (ch == 'A')
            cntA++;
        else if (ch == 'B')
            cntB++;
        else if (ch == 'C')
            cntC++;
    }

    if (cntA == 2)
        cout << "A" << endl;
    else if (cntB == 2)
        cout << "B" << endl;
    else if (cntC == 2)
        cout << "C" << endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}