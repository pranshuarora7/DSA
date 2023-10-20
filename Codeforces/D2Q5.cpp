#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> numbers;
    for (int i = 0; i < s.length(); i += 2)
    {
        numbers.push_back(s[i] - '0');
    }

    sort(numbers.begin(), numbers.end());

    string rearrangedSum;
    for (int i = 0; i < numbers.size(); i++)
    {
        rearrangedSum += to_string(numbers[i]);
        if (i < numbers.size() - 1)
        {
            rearrangedSum += '+';
        }
    }

    cout << rearrangedSum << endl;

    return 0;
}
