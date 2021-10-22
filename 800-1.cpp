#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    int c;
    cin >> c;
    int arr[2][c];
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < c; y++)
            cin >> arr[x][y];
    }

    // we have to reach (1,column-1) from (0,0)

    int i = 0, j = 0;
    while (true)
    {

        if (arr[i + 1][j] == 0)
            i++;
        else if (arr[i][j + 1] == 0)
            j++;
        else if (arr[i + 1][j + 1] == 0)
        {
            i++;
            j++;
        }
        else if (arr[i - 1][j + 1] == 0)
        {
            i--;
            j++;
        }
        else
        {
            cout << "No" << endl;
            break;
        }

        if (i == 1 && j == c - 1)
        {
            cout << "Yes" << endl;
            break;
        }
    }
}