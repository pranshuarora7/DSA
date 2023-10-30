#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i = 0;
    getline(cin, str);
    set<char> s;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            s.insert(str[i]);
        }
        i++;
    }
    cout << s.size() << endl;
}
