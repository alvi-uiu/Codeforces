#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    bool three = false, two = false;
    for (auto it : mp)
    {
        if (it.second == 3)
            three = true;
        else if (it.second == 2)
            two = true;
    }

    if (three && two)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}