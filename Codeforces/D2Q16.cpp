#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> puzzleSizes(m);

    for (int i = 0; i < m; i++)
    {
        cin >> puzzleSizes[i];
    }

    sort(puzzleSizes.begin(), puzzleSizes.end());

    int minDifference = puzzleSizes[n - 1] - puzzleSizes[0];

    for (int i = n; i < m; i++)
    {
        minDifference = min(minDifference, puzzleSizes[i] - puzzleSizes[i - n + 1]);
    }

    cout << minDifference << endl;

    return 0;
}
