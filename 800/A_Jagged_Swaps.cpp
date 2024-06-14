

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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr[i] = k;
    }

    if (arr[0] != 1) // as we can modify from idx 2 to n-1 so if first elem is 1
    // no matter how much swaps been done,it will not be sorted;

    /*
    1 2 5 4 3
    1 2 4 5 3
    1 2 4 3 5
    1 2 3 4 5
    */

    {
        cout << "NO"
             << "\n";
    }
    else
    {
        cout << "YES"
             << "\n";
    }

    return;
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