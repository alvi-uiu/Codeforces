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
    vector<int> vec(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }

    sort(vec.begin(), vec.end(), greater<int>());

    int mytake = vec[0];
    int i = 1;
    while (mytake <= (sum / 2))
    {
        mytake += vec[i];
        i++;
    }

    cout << i << "\n";

    return 0;
}