

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)(x).size()
#define FR(i, a, b) for (int i = (a); i < (b); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define ROF(i, a, b) for (int i = (a); i >= (b); --i)
#define FOREACH(i, v) for (auto &(i) : (v))

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

inline void solve()
{
}

int main()
{
    FAST_IO;

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int CostOfOneWayTickets = n * a;

    int CostOfSpatialTickets = (n / m) * b;

    int remRides = n % m;

    int CostOfRem = min(remRides * a, b);

    int totalMixedWay = CostOfSpatialTickets + CostOfRem;

    int minCost = min(CostOfOneWayTickets, totalMixedWay);

    cout << minCost;

    return 0;
}
