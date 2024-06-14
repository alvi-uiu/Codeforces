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

void Solve()
{
}

int32_t main()
{
    fast_io();

    int n;
    cin >> n;
    bool lucky = false;
    while (n)
    {

        if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 744 == 0)
        {
            lucky = true;
            break;
        }

        int dgt = n % 10;

        if (dgt == 4 || dgt == 7)
            lucky = true;
        else
        {
            lucky = false;
            break;
        }

        n /= 10;
    }

    if (lucky)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}