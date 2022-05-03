#include<stdio.h>

int main(){
     int x;
    scanf("%d",&x);

    int a,b,c;
    
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    c=x%10;

    int total=(100*a+10*b+c)+(100*b+10*c+a)+(100*c+10*a+b);

    printf("%d",total);
}