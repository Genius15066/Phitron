#include<stdio.h>

int main(){
    int test,count=0;
    scanf("%d",&test);

    while(test--){
        int p,q;
        scanf("%d %d",&p,&q);

        if(q-p>=2){
            count++;
        }
    }

    printf("%d",count);
}