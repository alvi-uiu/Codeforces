#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool hard = false;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            hard = true;
            break;
        }
    }

    if (!hard)
        cout << "EASY";
    else
        cout << "HARD";
    return 0;
}