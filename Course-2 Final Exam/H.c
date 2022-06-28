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

    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    int l = (n + 1) / 2;
    int arr[l];

    for (int i = 0, j = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            int x = s[i] - '0';
            arr[j] = x;
            j++;
        }
    }
    selectionSort(arr, l);
    char newstr[n];

    for(int i=0,j=0;i<n;i++){
        if(i%2==0){
            char c=arr[i/2] + '0';
            newstr[j] =c ;
        }
        else{
            newstr[j] = '+';
        }
        j++;
    }

    for(int i=0;i<n;i++){
        printf("%c",newstr[i]);
    }
}