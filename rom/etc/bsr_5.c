#include <stdio.h>

// 1부터 10까지 짝수의합 구하기

int main(void){
    int i, sum;
    sum = 0;

    for(i=1; i<11; i++)
    {
        if(i%2==0)
        sum=sum+i;
    }

    printf("짝수의 합 : %d\n", sum);

    return 0;
}