#include <stdio.h>

int main()
{
    int n, k, a;
    scanf("%d %d %d", &n, &k,&a);

     while(k-1>0){
         a++;
         k--;
         if(a>n){
             a=1;
         }
     }
    printf("%d", a);
}