#include <iostream>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int width, height, friends;
        cin >> width >> height >> friends;

        int pieces = 1;

        while (width % 2 == 0)
        {
            width /= 2;
            pieces *= 2;
        }

        while (height % 2 == 0)
        {
            height /= 2;
            pieces *= 2;
        }

        if (pieces >= friends)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
