#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        // cin >> arr[i];
        int x;
        cin >> x;
        mp[x]++;
    }

    for (auto it : mp)
    {
        if (it.second >= 3)
        {
            cout << it.first << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}
