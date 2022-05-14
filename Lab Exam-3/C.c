#include<stdio.h>
#include <string.h> 
#include<stdlib.h>

int main(){
    int x;
    scanf("%d",&x);
    
    char c[256];
    scanf("%s",c);

    int count=0;

    for(int i=1;i<x;i++){
        if(c[i]==c[i-1]){
            count++;
        }
    }

    printf("%d",count);

}