#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{

#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif

    char s[50];
    scanf("%s",s);

    int len = strlen(s);

    int i = 0;
    int countA = 0, countO = 0;
    while (i < len)
    {
        if (s[i] == 'a')
        {
            countA++;
        }
        else
        {
            countO++;
        }
        i++;
    }

    if (countA > countO)
    {
        printf("%d",len);
    }
    else
    {
        int l = 2 * countA - 1;
        printf("%d",l);
    }
}