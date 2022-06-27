#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

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

        int arr[n];

        for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        }

        selectionSort(arr, n);

        int diff=__INT32_MAX__;

        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<diff){
                diff=arr[i+1]-arr[i];
            }
        }

        printf("%d\n",diff);
    }
}