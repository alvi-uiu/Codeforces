#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int even = 0, odd = 0, pos = 0, neg = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % 2 == 0 && x >= 0)
        {
            even++;
            if (x > 0)
                pos++;
        }
        else if (x % 2 == 0 && x < 0)
        {
            even++;
            neg++;
        }
        else if (x % 2 != 0 && x >= 0)
        {
            odd++;
            pos++;
        }
        else if (x % 2 != 0 && x < 0)
        {
            odd++;
            neg++;
        }
    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << pos << "\n";
    cout << "Negative: " << neg << "\n";

    return 0;
}