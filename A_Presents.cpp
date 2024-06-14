#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numOfFriends;
    cin >> numOfFriends;

    vector<int> GiftGivers(numOfFriends + 1);

    for (int frndNum = 1; frndNum <= numOfFriends; frndNum++)
    {
        int giftGiver;
        cin >> giftGiver;
        GiftGivers[giftGiver] = frndNum;
    }

    for (int frndNum = 1; frndNum <= numOfFriends; frndNum++)
    {
        cout << GiftGivers[frndNum] << " ";
    }

    return 0;
}
