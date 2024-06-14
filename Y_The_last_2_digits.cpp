#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    long long res = a * b * c * d;
    res = res % 100;
    if (res < 10)
        cout << 0 << res;
    else
        cout << res;
    return 0;
}