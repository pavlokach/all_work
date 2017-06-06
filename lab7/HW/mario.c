#include <stdio.h>

int main(void)
{
    int n;
    printf("Height:");
    scanf("%d", n);
    for (int i=0; i<n; i++)
    {
        printf(" ");
        for (int x=0; x<i+2; x++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}