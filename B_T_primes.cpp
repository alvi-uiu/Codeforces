/*

And that each person will only have what they endeavoured towards , [53:39]

and that ˹the outcome of˺ their endeavours will be seen ˹in their record˺ , [53:40]

then they will be fully rewarded . [53:41]

*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

vector<bool> sieve(int limit)
{
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
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

    // The maximum number in arr can be 10^12. The square root of 10^12 is 10^6

    vector<bool> isPrime = sieve(1000000);

    for (auto num : arr)
    {
        ll sqOfNum = sqrt(num);
        if (sqOfNum * sqOfNum == num && isPrime[sqOfNum]) // num is perfect sq & sq is prime , lile 49
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }

    return 0;
}