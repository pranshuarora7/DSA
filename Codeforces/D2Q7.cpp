#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int pos = 0; // Initialize the position to search for 'h'

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == "hello"[pos])
        {
            pos++; // Move to the next character in "hello"
        }

        if (pos == 5)
        {
            cout << "YES"; // All characters in "hello" have been matched
            return 0;
        }
    }

    cout << "NO"; // If we reach this point, "hello" wasn't found in s
    return 0;
}
