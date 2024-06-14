#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> sums(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> sums[i];
    }

    sort(sums.begin(), sums.end());

    int a = sums[3] - sums[0];
    int b = sums[3] - sums[1];
    int c = sums[3] - sums[2];

    cout << a << " " << b << " " << c << "\n";

    return 0;
}
