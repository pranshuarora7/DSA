#include <iostream>
using namespace std;

int main()
{
    int a[5][5], x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                x = i - 2;
                y = j - 2;
                break;
            }
        }
    }
    if (x < 0)
        x = 0 - x;
    if (y < 0)
        y = 0 - y;
    cout << x + y;
}