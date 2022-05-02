#include<stdio.h>
#include<limits.h>

int main(){
    long long x;
    scanf("%lld",&x);

    if(x>=INT_MIN && x<=INT_MAX){
        printf("Yes");
    }
    else{
        printf("No");
    }
}