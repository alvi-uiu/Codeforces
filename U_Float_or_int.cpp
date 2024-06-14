#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin >> n;

    if (floor(n) == ceil(n))
    {
        cout << "int " << n;
    }
    else
    {
        cout << "float " << floor(n) << " " << setprecision(3) << n - floor(n);
    }

    return 0;
}