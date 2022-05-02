#include<stdio.h>

int main(){
    int s,t,x;
    scanf("%d %d %d",&s,&t,&x);

    if(s<t){
       if(x+.5>s && x+.5<t){
           printf("Yes");
       }
       else{
           printf("No");
       }
    }

    else{
        if(x+.5>t && x+.5<s){
           printf("No");
       }
       else{
           printf("Yes");
       }
    }
}