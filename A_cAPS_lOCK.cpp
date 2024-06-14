/*

And that each person will only have what they endeavoured towards , [53:39]

and that ˹the outcome of˺ their endeavours will be seen ˹in their record˺ , [53:40]

then they will be fully rewarded . [53:41]

*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

inline void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void Solve()
{
}

int32_t main()
{
    fast_io();

    string s;
    cin >> s;

    if (s.length() == 1)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
            cout << (char)toupper(s[0]);

        else
        {
            cout << (char)tolower(s[0]);
        }

        return 0;
    }

    bool Capkey1 = false;
    bool Capkey2 = false;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if ((s[0] >= 'a' && s[0] <= 'z') && (s[i + 1] >= 'A' && s[i + 1] <= 'Z'))
            Capkey1 = true;
        else
        {
            Capkey1 = false;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z'))
        {
            Capkey2 = true;
        }
        else
        {
            Capkey2 = false;
            break;
        }
    }

    if (Capkey1)
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s;
        return 0;
    }
    else if (Capkey2)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s;
        return 0;
    }
    else
    {
        cout << s;
    }

    return 0;
}