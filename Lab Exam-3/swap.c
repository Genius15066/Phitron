#include <stdio.h>

int main()
{
    int n = 10;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={11,12,13,14,15,16,17,18,19,20};
    for (int i = 0; i < n; i++)
    {
       int temp;
       temp=a[i];
       a[i]=b[i];
       b[i]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}