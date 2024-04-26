/*

And that each person will only have what they endeavoured towards , [53:39]

and that ˹the outcome of˺ their endeavours will be seen ˹in their record˺ , [53:40]

then they will be fully rewarded . [53:41]

*/

#include <bits/stdc++.h>
using namespace std;

inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void Solve()
{

    int n;
    cin >> n;
    string str;
    cin >> str;

    int dot = 0;
    bool filled = false;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '.')
            dot++;

        // conseqetive 3 dots = filled water in 3 cells and one water
        // can be  placed  in any other empty cell. so it will fill all
        // empty cells.
        // w.w.-> www.-> w.ww -> wwww

        if (i > 0 && i < n)
        {
            if (str[i - 1] == '.' && str[i] == '.' && str[i + 1] == '.')
            {
                cout << 2 << "\n";
                filled = true;
                break;
            }
        }
    }

    if (!filled)
    {
        cout << dot << "\n";
    }
}

int32_t main()
{
    fast_io();

    int t;
    cin >> t;

    while (t--)
    {
        Solve();
    }

    return 0;
}