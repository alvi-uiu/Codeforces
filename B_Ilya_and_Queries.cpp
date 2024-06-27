#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    vector<int> box(n, 0);
    for (int i = 1; i < n; ++i)
    {
        box[i] = box[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
    }

    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        cout << box[r] - box[l] << endl;
    }

    return 0;
}
