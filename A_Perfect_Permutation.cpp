#include <iostream>
#include <vector>

using namespace std;

using ll = long long int;

inline void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    if (n % 2 != 0)
    {

        cout << -1 << endl;
        return 0;
    }

    vector<ll> permutation(n);
    for (ll i = 1; i <= n; ++i)
    {
        permutation[i] = i;
    }

    for (ll i = 1; i <= n; i += 2)
    {
        swap(permutation[i], permutation[i + 1]);
    }

    for (ll i = 1; i <= n; ++i)
    {
        cout << permutation[i] << " ";
    }
    cout << endl;

    return 0;
}
