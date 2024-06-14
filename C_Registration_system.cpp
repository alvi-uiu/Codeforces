#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<string, int> strCnt;

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if (strCnt.find(s) == strCnt.end())
        {
            strCnt[s]++;
            cout << "OK" << "\n";
        }
        else
        {
            strCnt[s]++;
            int cnt = strCnt[s];
            string newCnt = s + to_string(cnt - 1);
            cout << newCnt << "\n";
        }
    }

    return 0;
}
