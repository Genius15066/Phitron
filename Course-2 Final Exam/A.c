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

    while (1)
    {
        int num;
        scanf("%d", &num);
        if (num != 42)
        {
            printf("%d\n", num);
        }
        else
        {
            break;
        }
    }
}