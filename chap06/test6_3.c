#include <stdio.h>

int main(void)
{
    int i, j;
    int num = 1;

    for(j = 0; j < 5; j++)
    {
        for(i = 1; i < 6; i++)
        {
            printf("%2d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
