#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int totalX = 0, totalY = 0, totalZ = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        totalX += x;
        totalY += y;
        totalZ += z;
    }

    if (totalX == 0 && totalY == 0 && totalZ == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
