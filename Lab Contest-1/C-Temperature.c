#include<stdio.h>

int main(){
    int test,count=0;
    scanf("%d",&test);


    while(test--){
        int temp;
        scanf("%d",&temp);
        if(temp<0){
            count++;
        }
    }
    printf("%d",count);
}