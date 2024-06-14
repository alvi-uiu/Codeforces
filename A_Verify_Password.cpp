#include <iostream>
#include <string>
using namespace std;

bool is_sorted(const string &s)
{
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (s[i] < s[i - 1])
        {
            return false;
        }
    }
    return true;
}

bool areDigitsBeforeLetters(const string &s)
{
    bool foundLetter = false;

    for (char ch : s)
    {
        if (isdigit(ch))
        {
            if (foundLetter)
            {
                // Found a digit after a letter
                return false;
            }
        }
        else if (isalpha(ch))
        {
            foundLetter = true; // Once we find a letter, set the flag
        }
    }

    return true;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string password;
        cin >> password;

        string digits, letters;

        for (char ch : password)
        {
            if (isdigit(ch))
            {
                digits += ch;
            }
            else
            {
                letters += ch;
            }
        }

        if (areDigitsBeforeLetters(password) && is_sorted(digits) && is_sorted(letters))
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
