#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long

// Precompute the number of cells required for each nice staircase
vector<ll> precompute_staircases()
{
    vector<ll> stairs;
    ll sum = 0;
    for (ll k = 1; sum <= 1e18; k++)
    {
        sum += (k * (k + 1)) / 2;
        stairs.push_back(sum);
    }
    return stairs;
}

// Calculate the maximum number of staircases that can be built with n cells
ll max_staircases(ll n, const vector<ll> &stairs)
{
    ll count = 0;
    for (const ll &stair : stairs)
    {
        if (n >= stair)
        {
            count++;
            n -= stair;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{
    fastio;
    vector<ll> stairs = precompute_staircases();

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << max_staircases(n, stairs) << '\n';
    }

    return 0;
}
