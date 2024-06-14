#include <iostream>
#include <algorithm> // for std::min
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fastio;

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k * l;
    int totalSlice = c * d;
    int totalSalt = p;

    int toastPossi_ByDrink = totalDrink / nl;
    int totalPossi_BySlice = totalSlice / 1;
    int totalPossi_bySalt = totalSalt / np;

    int totalToastPossi = min({toastPossi_ByDrink, totalPossi_BySlice, totalPossi_bySalt});

    int maxiNumOFToasts = totalToastPossi / n;

    cout << maxiNumOFToasts;

    return 0;
}
