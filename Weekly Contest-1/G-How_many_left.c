#include<stdio.h>

int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   int c,d;
   scanf("%d %d",&c,&d);

   int result=(a-c)*(b-d);

   printf("%d",result);
}