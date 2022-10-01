#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n][n];
    int sum = 0, mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i == mid || j == mid || (i == 0 && j < mid) || (i == (n - 1) && j > mid) || (j == n - 1 && i < mid) || (j == 0 && i > mid))
            {
                sum += a[i][j];
            }
        }
    }
    cout << sum;
}
