#include <iostream>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fastio;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = arr[0], maxIdx = 0;
    int mini = arr[n - 1], minIdx = n - 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            maxIdx = i;
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
            minIdx = i;
        }
    }

    int cnt = 0;

    for (int i = maxIdx; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
        cnt++;
    }

    if (minIdx < maxIdx) // if just one swap is needed to make the max element to front
        minIdx++;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // return 0;

    for (int i = minIdx; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
        cnt++;
    }

    cout << cnt;

    return 0;
}
