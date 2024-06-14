#include <iostream>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++)
    {
        int totalPrice = i * k;
        if (totalPrice % 10 == 0 || totalPrice % 10 == r)
        {
            cout << i << "\n";
            return 0;
        }
    }

    return 0;
}
