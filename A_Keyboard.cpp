#include <iostream>
#include <string>
using namespace std;

int main()
{
    char direction;
    string input;
    cin >> direction >> input;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    int shift = (direction == 'L') ? 1 : -1;

    string originalMessage;
    for (char ch : input)
    {

        size_t pos = keyboard.find(ch);

        originalMessage += keyboard[pos + shift];
    }

    cout << originalMessage << endl;

    return 0;
}
