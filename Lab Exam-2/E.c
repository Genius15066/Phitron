#include<stdio.h>

int distance(int w,int v,int r,int t){
    int d=0;

      while(t>0){
        if(t>w){
            d+=(w*v);
            t=t-w-r;
        }
        else{
            d+=(t*v);
            t=0;
        }
    }
    
    return d;
}

int main(){
    int a,b,c,d,e,f,x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

    int takahashi_distance=distance(a,b,c,x);
    int aoki_distance=distance(d,e,f,x);

    if(takahashi_distance>aoki_distance){
        printf("Takahashi");
    }
    else if(takahashi_distance<aoki_distance){
        printf("Aoki");
    }
    else{
        printf("Draw");
    }
}