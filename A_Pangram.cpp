#include <iostream>
#include <set>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c = tolower(c);
        }
        st.insert(c);
    }

    string abc;
    for (char c : st)
    {
        abc += c;
    }

    if (abc == "abcdefghijklmnopqrstuvwxyz")
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}
