#include <bits/stdc++.h>

using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int initial, target;
        cin >> initial >> target;

        if (initial == target)
        {
            cout << 0 << endl;
        }
        else if ((initial % 2 == target % 2) && (initial > target))
        {
            cout << 1 << endl;
        }
        else if ((initial < target) && (initial % 2 != target % 2))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}
