#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    int lights[n];

    for (int i = 0; i < n; i++)
        cin >> lights[i];

    sort(lights, lights + n);

    // max dis between given lights :
    double maxDis = 0;
    for (int i = 1; i < n; i++)
    {
        maxDis = max(maxDis, (double)lights[i] - lights[i - 1]);
    }

    // if there is absence of light in either 0-th pos or l-th pos

    double startDis = lights[0] - 0;
    double endDis = l - lights[n - 1];

    double d = max({maxDis / 2, startDis, endDis});
    cout << fixed << setprecision(10) << d;
    return 0;
}
