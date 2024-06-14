#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fastio;

    int n;
    cin >> n;
    vector<int> programming, maths, pe;

    for (int i = 1; i <= n; i++)
    {
        int skill;
        cin >> skill;
        if (skill == 1)
            programming.push_back(i);
        else if (skill == 2)
            maths.push_back(i);
        else if (skill == 3)
            pe.push_back(i);
    }

    int teams = min({programming.size(), maths.size(), pe.size()});
    cout << teams << "\n";

    for (int i = 0; i < teams; i++)
    {
        cout << programming[i] << " " << maths[i] << " " << pe[i] << "\n";
    }

    return 0;
}
