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

    int minimumDifference = puzzleSizes[n - 1] - puzzleSizes[0];

    for (int i = n; i < m; i++)
    {
        minimumDifference = min(minimumDifference, puzzleSizes[i] - puzzleSizes[i - n + 1]);
    }

    cout << minimumDifference << endl;

    return 0;
}
