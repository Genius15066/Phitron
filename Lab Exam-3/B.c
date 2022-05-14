#include<stdio.h>

int main(){
    int arr[100];

    int test;
    scanf("%d",&test);

    int max=0;

    for(int i=0;i<test;i++){
        scanf("%d",&arr[i]);

        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    int s=0;
    for(int i=0;i<test;i++){
        s+=(max-arr[i]);
    }

    printf("%d",s);

}