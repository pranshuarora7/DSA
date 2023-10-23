#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int pos = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == "hello"[pos])
        {
            pos++;
        }

        if (pos == 5)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
