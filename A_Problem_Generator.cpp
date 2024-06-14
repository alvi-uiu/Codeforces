#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string diff;
        cin >> diff;

        unordered_map<char, int> pbCnt;
        for (char ch : diff)
        {
            pbCnt[ch]++;
        }

        int additionalProblems = 0;
        for (char ch = 'A'; ch <= 'G'; ++ch)
        {
            int req = k;
            int current = pbCnt[ch];
            if (current < req)
            {
                additionalProblems += (req - current);
            }
        }

        cout << additionalProblems << endl;
    }

    return 0;
}
