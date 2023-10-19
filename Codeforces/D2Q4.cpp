#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    for (int x = 0; x < s1.size(); x++)
    {
        s1[x] = tolower(s1[x]);
        s2[x] = tolower(s2[x]);
    }

    if (s1 < s2)
        cout << "-1";
    else if (s1 > s2)
        cout << "1";
    else
        cout << "0";

    return 0;
}
