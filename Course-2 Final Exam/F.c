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

    int a = 2;
    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);
    
    int sum=1;
    while(n--){
        if(sum*a<sum+k){
            sum*=a;
        }
        else{
            sum+=k;
        }
    }
    printf("%d", sum);
}