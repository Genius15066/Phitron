#include <bits/stdc++.h>
using namespace std;
 
int maximum(int *arr, int r, int c)
{
    int max = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (*(arr + i * c + j) > max)
            {
                max = *(arr + i * c + j);
            }
        }
    }
    return max;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
 
    int max = maximum((int *)a, m, n);
    int frequency[max + 1] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            frequency[a[i][j]]++;
        }
    }
    int frequencyCheck[max + 1] = {0};
 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(frequency[a[i][j]] > 0)
            {
                frequencyCheck[a[i][j]]++;
            }
            if(frequencyCheck[a[i][j]] >1)
            {
                cout << -1 << " ";
            }
            else{
                cout << a[i][j] << " ";
            }
        }
        cout<<endl;
    }
}
