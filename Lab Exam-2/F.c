#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int h = (i / 2) % 2;
            if (i % 2 == 0 || (h == 0 && j == m - 1) ||  (h != 0 && j ==0) )
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}