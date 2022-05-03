#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int minimum=a+b;

    if((a+c)<minimum){
        minimum=a+c;
    }
    if((b+c)<minimum){
        minimum=b+c;
    }

    printf("%d",minimum);

}