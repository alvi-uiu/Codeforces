#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
unordered_map<ll, ll> mp;

inline ll fib(ll n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;

    if (mp.count(n))
        return mp[n];

    ll res = fib(n - 1) + fib(n - 2);
    return mp[n] = res;
}

int main()
{
    ll n;
    cin >> n;

    cout << fib(n);

    return 0;
}