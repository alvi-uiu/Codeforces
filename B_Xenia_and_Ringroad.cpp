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

int32_t main()
{
    fast_io();

    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for (int i = 0; i < m; i++)
        cin >> arr[i];

    ll cnt = 0;
    int current_house = 1;

    for (int i = 0; i < m; i++)
    {
        if (arr[i] >= current_house)
        {

            cnt += (arr[i] - current_house);
        }
        else
        {

            cnt += (n - (current_house - arr[i]));
        }
        current_house = arr[i];
    }

    cout << cnt << endl;

    return 0;
}
