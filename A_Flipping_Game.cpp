#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int init1Cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            init1Cnt++;
    }

    int flip;
    int maxi1Cnt = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        flip = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
                flip--;
            else
                flip++;

            maxi1Cnt = max(init1Cnt + flip, maxi1Cnt);
        }
    }

    cout << maxi1Cnt;

    return 0;
}