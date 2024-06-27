#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

unordered_map<int, int> memo;

inline int minimal_moves(int n, int m)
{
    // If n is zero, no moves are needed
    if (n == 0)
        return 0;
    // If n is negative, it's an invalid move
    if (n < 0)
        return INT_MAX;

    // Check if the result is already computed
    if (memo.count(n))
        return memo[n];

    // Calculate the minimum number of moves to reach exactly n steps
    int res = 1 + min(minimal_moves(n - 1, m), minimal_moves(n - 2, m));

    // Memoize the result for the current n
    memo[n] = res;
    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;

    // Calculate the minimum number of moves required
    int result = minimal_moves(n, m);

    // Find the smallest multiple of m that is greater than or equal to the result
    while (result % m != 0)
    {
        result++;
        if (result > n)
        {
            result = -1;
            break;
        }
    }

    // Output the result
    cout << (result > n ? -1 : result) << endl;

    return 0;
}
