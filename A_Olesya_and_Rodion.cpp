#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    // Special case for t = 10
    if (t == 10)
    {
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1;
            for (int i = 1; i < n; ++i)
            {
                cout << 0;
            }
            cout << endl;
        }
    }
    else
    {
        // General case for t != 10
        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                cout << t;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
