#include <stdio.h>

int main(void)
{
    int i, j;

    for (j = 0; j < 3; j++)     //3번 반복, 0~2까지
    {
        for (i = 0; i < 5; i++)     //5번 반복, 0~4까지

        printf("*");
    }
        printf("\n");

    return 0;
}
// 최종 i, j 값을 출력
//i = 5, j = 3