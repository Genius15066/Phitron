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

    char template[] = "heidi";
    char s[1000];
    scanf("%s", s);

    int len = strlen(s);

    if (len <= strlen(template))
    {
        printf("NO");
    }

    else
    {
        int p = 0,i=0;
        for (; i < strlen(template); i++)
        {
            int j = p;
            for (; j < len; j++)
            {
                if (s[j] == template[i])
                {
                    p = j + 1;
                    break;
                }
            }
            if(j>=len){
                break;
            }
        }
        if (i == strlen(template))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}