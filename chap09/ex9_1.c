#include <stdio.h>

int main(void){
    int a;
    int *pa
    double b;
    char c;

    pa = &a;        // 포인터에 a의 주소 대입
    *pa = 10;       // 포인터로 변수 a에 10 대입

    printf("a변수의 주소 : %p\n", &a);
    printf("pa에 저장된 변수의 주소 : %p\n", pa);
    //printf("char형 변수의 주소 : %p\n", &c);

    printf("포인터로 a값 출력 : %d\n", *pa);
    printf("변수명으로 a값 출력 : %d\n", a);

	
	return 0;
}
