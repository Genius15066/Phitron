#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
    int x;
    scanf("%d",&x);
    char c[100];
    scanf("%s",c);

    int hash[26] = {0};

    for(int i=0;i<x;i++){
        if(c[i]>='a' && c[i]<='z'){
            c[i] = c[i]-32;
        }

        hash[c[i]-65]=1;
    }
    
    int count=0;
    for(int i=0;i<26;i++){
        count+=hash[i];
    }

    if(count==26){
        printf("YES");
    }
    else{
        printf("NO");
    }    
}
