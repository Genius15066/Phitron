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

    int n,countz=0;;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);

    for(int i=0;i<n;i++){
        if(s[i]=='z'){
            countz++;
        }
    }
    int numz=countz;
    int num1=(n-countz*4)/3;

    for(int i=0;i<num1;i++){
        printf("1 ");
    }
     for(int i=0;i<numz;i++){
        printf("0 ");
    }
}