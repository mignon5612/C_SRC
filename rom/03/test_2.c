#include <stdio.h>

int main(void){
    char fruit[20];
    int cnt;

    puts("좋아하는 과일 : ");       //printf는 옆으로 바로 입력 puts는 엔터치고 밑에 입력됨 
    scanf("%s", fruit);
    printf("몇 개 : ");
    scanf("%d", &cnt);
    printf("%s를 %d개 드립니다.\n", fruit, cnt);
    
    return 0;
}