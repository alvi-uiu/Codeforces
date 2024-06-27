#include <bits/stdc++.h>
using namespace std;

int countDgts(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int findNumbers(vector<int> &nums)
{
    int cnt = 0;
    for (auto it : nums)
    {

        int x = log10(it) + 1;
        if (x % 2 == 0)
            cnt++;
    }

    return cnt;
}

int main()
{

    vector<int> nums = {1, 2, 3, -99, 7777};

    cout << findNumbers(nums);

    return 0;
}