#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i < 10; i++)
    {
        printf("2 * %d = %d\n", i, 2*i);
    }
    
    return 0;
}