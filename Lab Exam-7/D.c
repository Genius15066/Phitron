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
        scanf("%d", &n);
        int arr[n+1];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int counter[n+1];
        memset(counter, 0, sizeof(counter));

        for(int i = 0; i < n; i++)
        {
            counter[arr[i]]++;
        }
       
       int flag = 0;
       for(int i=1;i<=n;i++){
        if(counter[i]>=3){
            printf("%d\n",i);
            flag=1;
            break;
        }
       }
       if(flag==0){
        printf("-1\n");
       }
    }
}