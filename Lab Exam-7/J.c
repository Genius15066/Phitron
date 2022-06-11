#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int isCapital(char a)
{
    if (a >= 'A' && a <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isSmall(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void changeCase(char s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isCapital(s[i]))
        {
            s[i] += 32;
        }
        else if (isSmall(s[i]))
        {
            s[i] -= 32;
        }
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif

    char s[101];
    scanf("%s", s);
    int n = strlen(s);
    int change = 0;
    
    if(n==1){
        if (isSmall(s[0]))
        {
            change = 1;
        }
        if(isCapital(s[0])){
            change = 1;
        }
    }

    if (n>1 && isSmall(s[0]))
    {
        for (int i = 1; i < n; i++)
        {
            if (isCapital(s[i]))
            {
                change = 1;
            }
            else
            {
                change = 0;
                break;
            }
        }
    }

    else if (n>1 && isCapital(s[0]))
    {
        for (int i = 1; i < n; i++)
        {
            if (isCapital(s[i]))
            {
                change = 1;
            }
            else
            {
                change = 0;
                break;
            }
        }
    }

    if (change == 1)
    {
        changeCase(s, n);
    }

    printf("%s", s);
}