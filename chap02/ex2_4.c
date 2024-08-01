#include <stdio.h>

int main(void){
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n",3.4);
	
	printf("--------------------------------\n");
	
	printf("%d의 2진수 값은 %b입니다.\n", 10, 10);
	printf("%d의 8진수 값은 %o입니다.\n", 10, 10);
	printf("%d의 16진수 값은 %x입니다.\n", 10, 10);
	
	printf("--------------------------------\n");
	
	printf("%6.1lf\n", 3.4);
	printf("%6.1lf\n", 31.7);
	
	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}
