#include<stdio.h>

int main(){
   int a,b,count=0;
    scanf("%d %d",&a,&b);

    for(int i=a;i<=b;i++){
        count++;
    }

    printf("%d",count);
}