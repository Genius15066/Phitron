#include<stdio.h>

int main(){
    int round;
    scanf("%d", &round);

    char s[round];
    scanf("%s", s);
    
    int countA=0, countD=0;

    for(int i=0;i<round;i++){
        if(s[i]=='A'){
            countA++;
        }
        else{
            countD++;
        }
    }

    if(countA>countD){
        printf("Anton");
    }
    else if(countA<countD){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }
}