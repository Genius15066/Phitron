#include <bits/stdc++.h>
using namespace std;

void palindrome(int n)
{
    int temp = n;
    int rev = 0;
    while (temp > 0)
    {
        int last = temp % 10;
        rev = rev * 10 + last;
        temp = temp / 10;
    }
    if (rev == n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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
    int n;
    cin >> n;
    palindrome(n);
}
