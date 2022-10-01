#include <bits/stdc++.h>
using namespace std;
 
void differenceOfArrays(int a[], int b[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << a[i] << " ";
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    differenceOfArrays(a, b, n, m);
}
