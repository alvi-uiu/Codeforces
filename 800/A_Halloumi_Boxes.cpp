/*

وَأَن لَّيْسَ لِلْإِنسَـٰنِ إِلَّا مَا سَعَىٰ

and that each person will only have what they endeavoured towards,

*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (k == 1) // it can reverse only one int
    {
        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES";
            cout << "\n";
        }
        else
        {
            cout << "NO";
            cout << "\n";
        }
    }
    else
    {
        cout << "YES";
        cout << "\n";
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}