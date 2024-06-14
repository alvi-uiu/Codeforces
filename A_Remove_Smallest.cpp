#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
inline void solve()
{
    ll n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    bool flag = true;

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - arr[i - 1]) > 1)
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES" << "\n";

    else
        cout << "NO" << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
