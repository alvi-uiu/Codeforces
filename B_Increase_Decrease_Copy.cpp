#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{

    ll n;
    cin >> n;

    vector<ll> A(n);
    vector<ll> B(n + 1);

    for (ll i = 0; i < n; i++)
        cin >> A[i];

    for (ll i = 0; i <= n; i++)
        cin >> B[i];

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        ans += abs(A[i] - B[i]);
    }

    ll minOutSide = INT_MAX;

    ans++; // at least one iteration extra needed as size of B is 1 greater than A

    for (ll i = 0; i < n; i++)
    {

        ll x = min(A[i], B[i]);
        ll y = max(A[i], B[i]);

        if (B[n] >= x && B[n] <= y)
        {
            minOutSide = 0;
        }
        else
        {
            minOutSide = min(minOutSide, min(abs(B[n] - A[i]), abs(B[n] - B[i])));
        }
    }

    ans += minOutSide;

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
