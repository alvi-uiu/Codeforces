#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void Solve()
{
}

int32_t main()
{
    fast_io();

    int n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    int cnt = 1;
    int maxi = 1;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 1;
        }
    }

    cout << maxi;
    return 0;
}
