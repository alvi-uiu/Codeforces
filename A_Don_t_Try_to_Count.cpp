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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int cnt = 6; // as we got 26 lower case letters and
    // as in te operation we are doubling it everytime so , it will
    // maximum run 6 times ; 2^6=64
    int found = 0;
    int op = 0;
    while (cnt--)
    {
        if (x.find(s) != string::npos)
        { // basically checks if the substring x exists within the string s. If it does, it executes the code inside the if block.
            found = 1;
            break;
        }
        op++;
        x += x;
    }
    if (found)
    {
        cout << op << endl;
    }
    else
        cout << -1 << endl;
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