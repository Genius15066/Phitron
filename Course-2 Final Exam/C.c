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

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);

        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int new_arr[n];

        for(int i=0;i<=n/2;i++){
            int j=2*i;
            new_arr[j]=arr[i];
            new_arr[j+1]=arr[n-i-1];
        }

        for(int i=0;i<n;i++){
            printf("%d ",new_arr[i]);
        }
        printf("\n");
    }
}