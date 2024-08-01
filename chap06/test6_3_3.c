#include <stdio.h>

int main(void){

    int i, j;
    int a;

    printf("몇줄 : ");
    scanf("%d", &a);

    for (j = 0; j < a; j++)     // 5번 반복, 0~4까지 
    {
        for (i = a; i > j; i--) 
        {
            printf("*");
        }
        printf("\n");
    }
	
	return 0;
}