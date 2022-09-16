#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Utilities/input.txt", "r", stdin);
    freopen("../../Utilities/output.txt", "w", stdout);
#endif
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int max = arr[n - 1];
        int frequency[max + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            frequency[arr[i]]++;
        }
        int max_frequency = 0;
        for (int i = 0; i <= max; i++)
        {
            if (frequency[i] > max_frequency)
            {
                max_frequency = frequency[i];
            }
        }
        cout << n-max_frequency << endl;
    }
}
