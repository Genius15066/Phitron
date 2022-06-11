#include<stdio.h>

void reverse_array(int arr[],int n){
     for(int i=0;i<n/2;i++){
      int temp=arr[i];
      arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
   }
}

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    reverse_array(arr,n);
    print_array(arr,n);
}