#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int count5=0,count7=0;
    if(a==5){
        count5++;
    }
    if(a==7){
        count7++;
    }

    if(b==5){
        count5++;
    }
    if(b==7){
        count7++;
    }

    if(c==5){
        count5++;
    }
    if(c==7){
        count7++;
    }

    if(count5==2 && count7==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}