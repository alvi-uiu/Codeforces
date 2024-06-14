#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int minnDiff = INT_MAX;
    for (int i = 0; i <= m - n; i++) // sub-arry size = n
    {
        int curMxDiff = arr[i + n - 1] - arr[i];
        minnDiff = min(minnDiff, curMxDiff);
    }

    cout << minnDiff;

    return 0;
}
