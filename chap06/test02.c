#include <stdio.h>

int main(void){
    int i;
    int sum = 0;

    for (i = 1; i < 101; i++)       // 100회 반복, 1~100까지
    {
        if ( ((i % 3) != 0) && ((i % 7) != 0) )        //!=0해주면 0아니면 참
        {
        continue;
        }


    sum += i;
    }

    printf("sum : %d\n", sum);
	
	return 0;
}