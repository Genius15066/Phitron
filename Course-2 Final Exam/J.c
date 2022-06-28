#include <stdio.h>
#include <string.h>

struct name
{
    char first[20];
    char last[20];
};

void sort(struct name *arr, int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (strcmp(arr[j].first, arr[min_idx].first) < 0)
                min_idx = j;
        struct name temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif

    int n;
    scanf("%d", &n);

    struct name names[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", names[i].first, names[i].last);
    }

    sort(names, n);
    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (strcmp(names[i].first,names[i + 1].first)==0 && strcmp(names[i].last,names[i + 1].last)==0)
       
        {
           flag=1;
           break;
        }
    }
    if(flag==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    
    return 0;
}