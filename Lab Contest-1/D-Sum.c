#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    double sum;
    
   while(test--){
       double a,b;
       scanf("%lf %lf",&a,&b);
       double multi=a*b;
       sum+=multi;
   }
   printf("%.3lf",sum);

}