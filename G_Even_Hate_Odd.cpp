#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int evenCnt = 0;
    int oddCnt = 0;
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x % 2 == 0)
            evenCnt++;
        else
            oddCnt++;
    }

    if (evenCnt == oddCnt)
    {
        cout << 0 << endl;
    }
    else if (n % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << abs((n / 2) - evenCnt) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
