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
    vector<bool> primes = sieve(1e5);

    int n;
    cin >> n;

    if (primes[n])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}