#include <stdio.h>

int main(void){
	printf("%d\n", 1e4);
	printf("%lf\n", 1e4);
	
	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof(10.0));
		
	printf("--------------------------------\n");
	
	int num = 12;
	
	printf("%d\n", num);
	printf("%d\n", num);
	printf("%d\n", num);
	
	printf("--------------------------------\n");
	
	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12);
	
	printf("--------------------------------\n");
	
	printf("%d\n", 'A');          //%d는 숫자코드 A는 문자로 다르게 했을경우 아스키코드 숫자로 번역됨
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");
	
	printf("--------------------------------\n");
	
	printf("학번 : %d\n", 32165);
	printf("이름 : %s\n", "홍길동");
	printf("학점 : %c\n", 'A');
	
		
	return 0;
}
