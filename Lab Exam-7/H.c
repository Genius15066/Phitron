#include <stdio.h>
#include <string.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif

    char s[100];
    scanf("%s", s);
    int n = strlen(s);

    int s0 = 0, s1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {

            s0++;
            if (s0 == 7)
            {
                break;
            }
            s1 = 0;
        }
        else
        {
            s1++;
            if (s1 == 7)
            {
                break;
            }
            s0 = 0;
        }
    }

    if (s1 == 7 || s0 == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}