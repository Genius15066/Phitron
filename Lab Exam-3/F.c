#include<stdio.h>

int main(){
    long long x;
    scanf("%lld",&x);

    int flag=0;

    while(x){
       long long r=x%10;
        x=x/10;
        if (r==7 || r==4 ){
            flag++;
           
        }   
    }


    if(flag==4 || flag==7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}