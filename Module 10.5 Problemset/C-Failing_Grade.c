#include<stdio.h>

int main(){
    int n,p,count=0;
    scanf("%d %d",&n,&p);

    while(n--){
        int x;
        scanf("%d",&x);

        if(x<p){
            count++;
        }
    }
    printf("%d",count);
}