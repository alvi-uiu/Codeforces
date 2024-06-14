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

void rec_permute(vector<int> nums, vector<vector<int>> &ans, int idx)
{

    if (idx == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[i], nums[idx]);
        rec_permute(nums, ans, idx + 1);
        swap(nums[i], nums[idx]);
    }
}

void Solve()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> dp;

    for (int item : arr)
    {
        dp[item]++;
    }

    if (dp.size() == 1)
    {
        cout << "Yes" << endl;
    }
    else if (dp.size() == 2)
    {
        auto it = dp.begin();

        int count1 = it->second;
        it++;
        int count2 = it->second;
        int temp = abs(count1 - count2);
        if (temp <= 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
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