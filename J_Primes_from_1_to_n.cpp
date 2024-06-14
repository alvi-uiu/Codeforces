#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    int n;
    cin >> n;
    vector<bool> primes = sieve(n);
    bool first = 1;
    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
        {
            if (!first)
            {
                cout << " ";
            }
            cout << i;
            first = 0;
        }
    }

    return 0;
}