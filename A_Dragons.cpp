#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int32_t main()
{
    fast_io();

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    bool canMove = true;

    for (int i = 0; i < n; i++)
    {
        if (s > dragons[i].first)
        {
            s += dragons[i].second;
        }
        else
        {
            canMove = false;
            break;
        }
    }

    if (canMove)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}
