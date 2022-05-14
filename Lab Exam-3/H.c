#include<stdio.h>

void leftrotate(int a[],int n,int d)
{
    int i,j,temp;
    for(i=0;i<d;i++)
    {
        temp=a[0];
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
}

int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    d=d%n;
    leftrotate(a,n,d);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}