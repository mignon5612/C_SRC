#include <stdio.h>

void printf_ary(int *pa);

int main(void){
    int ary[5] = { 10, 20, 30, 40, 50};

    printf_ary(ary);    //함수호출 
	
	return 0;
}

void printf_ary(int *pa){
    int i;
    for(i = 0; i < 5; i++){
        printf("%d", *(pa+i));
        // printf("%d", *pa);
    }
}
