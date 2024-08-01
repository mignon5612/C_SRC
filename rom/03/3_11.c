#include <stdio.h>

int main(void){
    char grade;
    char name[10];

    printf("학점입력 : ");
    scanf("%c", &grade);
    printf("이름입력 : ");
    scanf("%s", name);
    printf("%s의 학점은 %c입니다.\n", name, grade);

    return 0;
}