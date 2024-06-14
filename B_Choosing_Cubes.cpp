#include <bits/stdc++.h>

using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int numCubes, favIndex, numRemoved;
    cin >> numCubes >> favIndex >> numRemoved;
    favIndex--; // Convert to 0-based index
    vector<int> cubeValues(numCubes);
    for (int i = 0; i < numCubes; i++)
    {
        cin >> cubeValues[i];
    }

    int favValue = cubeValues[favIndex];

    sort(cubeValues.begin(), cubeValues.end(), greater<int>());

    int lowerBound = 0;
    int upperBound = 0;

    int left = 0, right = numCubes - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (cubeValues[mid] > favValue)
        {
            left = mid + 1;
        }
        else if (cubeValues[mid] < favValue)
        {
            right = mid - 1;
        }
        else
        {
            lowerBound = mid;
            right = mid - 1;
        }
    }

    left = 0, right = numCubes - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (cubeValues[mid] > favValue)
        {
            left = mid + 1;
        }
        else if (cubeValues[mid] < favValue)
        {
            right = mid - 1;
        }
        else
        {
            upperBound = mid;
            left = mid + 1;
        }
    }

    numRemoved--; // Convert to 0-based index

    if (numRemoved >= upperBound)
    {
        cout << "YES\n";
    }
    else if (numRemoved >= lowerBound)
    {
        cout << "MAYBE\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
