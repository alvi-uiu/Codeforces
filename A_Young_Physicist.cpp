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

    int co_ordinate[3]; // (0; 0; 0)
    int x, y, z;
    x = y = z = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> co_ordinate[0] >> co_ordinate[1] >> co_ordinate[2];
        x += co_ordinate[0];
        y += co_ordinate[1];
        z += co_ordinate[2];
    }

    if (x == 0 && y == 0 && z == 0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}
