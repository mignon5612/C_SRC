#include <stdio.h>

int sum(int x, int y);      //함수선언

int main(void){
	int a = 10, b = 20;
    int result;

    result = sum(a, b);     //함수 호출
    printf("%d\n", result);

	return 0;
}

// 함수구현 (정의)
int sum(int x, int y){      // 여기있는 a는 함수구현에서만 쓰는 sum a, 메인문에 a랑은 다른 a (헷갈릴까봐 x,y로 함)
    int temp;
    temp = x + y;
    return temp;        //return = 반환값
}