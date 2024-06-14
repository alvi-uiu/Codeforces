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

int main()
{
    fast_io();

    string s;
    cin >> s;
    int n = s.size();
    int cnt = 1;
    int maxFreq = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
            maxFreq = max(maxFreq, cnt);
        }
        else
            cnt = 1;
    }

    if (maxFreq >= 7)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}
