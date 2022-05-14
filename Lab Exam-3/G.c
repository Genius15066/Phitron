#include <stdio.h>
#include<string.h>


int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char b[100];
        scanf("%s", b);

        int z=strlen(b);
        
        char new[100];

        int j=0;
        new[j]=b[0];

        for(int i=1;i<z;i++){
            if(i%2!=0 || i==z-1 ){
                j++;
                new[j]=b[i];
            }
        }
        new[j+1]='\0';
        printf("%s\n",new);
    }

    
}
