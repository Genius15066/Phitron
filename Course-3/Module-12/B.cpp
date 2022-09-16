#include <bits/stdc++.h>
using namespace std;

int smallest_number(int arr[], int l, int r)
{
    int minimum =arr[l-1];
    for (int i = l; i <= r - 1; i++)
    {
        minimum = min(minimum, arr[i]);
    }
    return minimum;
}

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
    for(int i=0;i<test;i++)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << "Case " << i+1 << ": " << endl;
        
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << smallest_number(arr, l, r) << endl;
        }
    }
}
