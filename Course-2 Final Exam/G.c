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

    int l, r;
    scanf("%d %d", &l, &r);

    char s[100000];
    scanf("%s", s);

    for(int i=l-1,j=1;i<(l+r-1)/2;i++,j++){
        char temp=s[i];
        s[i]=s[r-j];
        s[r-j]=temp;
    }
    printf("%s", s);
}