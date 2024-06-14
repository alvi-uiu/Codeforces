#include <iostream>
#include <map>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> group_count;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        group_count[size]++;
    }

    int taxis = 0;

    // Groups of size 4
    taxis += group_count[4];

    // Groups of size 3
    int min3and1 = min(group_count[3], group_count[1]);
    taxis += min3and1;
    group_count[3] -= min3and1;
    group_count[1] -= min3and1;

    // Remaining groups of size 3
    taxis += group_count[3];

    // Groups of size 2
    taxis += group_count[2] / 2;
    group_count[2] %= 2;

    // If there's one group of 2 left, it can take up to two groups of 1
    if (group_count[2] == 1)
    {
        taxis++;
        group_count[1] -= group_count[1] - min(group_count[1], 2);
    }

    // Remaining groups of size 1
    if (group_count[1] > 0)
    {
        taxis += ceil(group_count[1] / 4); // (group_count[1] + 3) / 4 is the same as ceil(group_count[1] / 4.0)
    }

    cout << taxis << endl;

    return 0;
}
