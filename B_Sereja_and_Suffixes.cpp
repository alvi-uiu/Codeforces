#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> uniCnt(n + 1, 0), arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    set<int> uniqElem;

    for (int i = n - 1; i >= 0; i--)
    {
        uniqElem.insert(arr[i]);
        uniCnt[i] = uniqElem.size();
    }

    while (m--)
    {
        int li;
        cin >> li;
        cout << uniCnt[li - 1] << "\n";
    }

    return 0;
}