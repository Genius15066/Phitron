#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    
    int need;
    if(x>=0 && x<40){
       need=40-x;
       printf("%d",need);
    }
    else if(x>=40 && x<70){
        need=70-x;
        printf("%d",need);
    }
    else if(x>=70 && x<90){
        need=90-x;
        printf("%d",need);
    }
    else{
        printf("expert");
    }
}