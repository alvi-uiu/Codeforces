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

    string s;
    cin >> s;

    int upCnt = 0, lowCnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lowCnt++;
        else
            upCnt++;
    }

    if (upCnt > lowCnt)
    {
        for (int i = 0; i < s.length(); i++)
        {

            s[i] = toupper(s[i]);
        }
    }
    else if (lowCnt > upCnt)
    {
        for (int i = 0; i < s.length(); i++)
        {

            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {

            s[i] = tolower(s[i]);
        }
    }

    cout << s << "\n";

    return 0;
}