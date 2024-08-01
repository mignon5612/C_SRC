#include <stdio.h>

int main(void){
// A/B 입력받아 출력하기
    double a, b;

    scanf("%lf%lf", &a, &b);
    printf("%.10lf\n", a/b);

    // int a = 1;
    // int b = 2;
    // int tot = a + b;

    // printf("%d\n", tot);
    //printf("%d + %d = %d\n", a, b, tot);
	
	return 0;
}
