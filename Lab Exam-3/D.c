#include<stdio.h>

int main(){
    char c[1000];
    scanf("%s",c);

    if(c[0]>='a' && c[0]<='z'){
        c[0] = c[0] - 32;
    }

    printf("%s",c);
}