#include<stdio.h>

int main(){
    int v,a,b,c;
    scanf("%d %d %d %d",&v,&a,&b,&c);

    int n=0,count=0;

    while(n<=v){
       if(count%3==0){
           n+=a;
       }
       else if(count%3==1){
           n+=b;
       }
       else{
           n+=c;
       }
       count++;
    }
    
    if(count%3==1){
        printf("F");
    }
    else if(count%3==2){
        printf("M");
    }
    else{
        printf("T");
    }
}