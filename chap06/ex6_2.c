#include <stdio.h>

int main(void)
{
    int a = 1;
    int i;

    // for (i = 1; i < 11; i++)
    // {
    //     a = a + i;
    // }

    i = 1;      //초기식
    while (i < 11)      //조건식
    {
        a = a + i;
        i++;        //증감식
    }
    
    printf("a : %d\n", a);
    printf("i : %d\n", i);

    return 0;
}