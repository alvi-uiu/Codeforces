#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

unordered_map<string, ll> memo;

ll ways(ll x, ll y, ll K, ll S)
{
    ll z = S - x - y;
    if (z < 0 || z > K)
        return 0; // Out of bounds for Z
    if (x > K || y > K)
        return 0; // Out of bounds for X or Y
    if (x + y + z == S)
        return 1; // Base case: valid combination found

    // Create a key for memoization
    string key = to_string(x) + "," + to_string(y);
    if (memo.find(key) != memo.end())
        return memo[key];

    // Calculate the number of ways for the current state
    ll res = 0;
    res += ways(x + 1, y, K, S);
    res += ways(x, y + 1, K, S);

    return memo[key] = res;
}

int main()
{
    ll K, S;
    cin >> K >> S;
    ll result = 0;

    // Iterate over possible values of X and Y to initialize the recursion
    for (ll x = 0; x <= K; ++x)
    {
        for (ll y = 0; y <= K; ++y)
        {
            result += ways(x, y, K, S);
        }
    }

    cout << result << endl;
    return 0;
}
