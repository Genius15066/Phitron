#include <stdio.h>
#include <string.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        char s[100];
        scanf("%s", s);

        int delete_no = n - 11;
        int pos8 = n + 1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '8')
            {
                pos8 = i + 1;
                break;
            }
        }

        if (pos8 <= delete_no + 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}