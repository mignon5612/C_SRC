#include <stdio.h>

int main(void){
    int value;

    printf("10이하의 숫자면 무한반복 : \n");
    
    do
    {
        scanf("%d", &value);
    
    }
    while (value<=10);

    printf("10보다 큰 수가 입력되었습니다.\n ");
    
	return 0;
}
