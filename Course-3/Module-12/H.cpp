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
    string s;
    cin >> s;
    int posA, posZ;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            posA = i;
            break;
        }
    }

    for (int i = posA + 1; i < s.length(); i++)
    {
        if (s[i] == 'Z')
        {
            posZ = i;
        }
    }

    cout << posZ - posA + 1 << endl;
}
