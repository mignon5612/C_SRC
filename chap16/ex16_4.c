#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printf_str(char **ps);

int main(void){
    char temp[80];
    char *str[3];printf_str(str);
    int i;void printf_str(char **pstr);

    for (i=0; i<3; i++){
        printf("문자열을 입력하세요 : ");
        gets(temp);
        str[i] = (char*)malloc(strlen(temp)+1);
        strcpy(str[i], temp);
        //(str[i], temp); -대입연산자는 주소값만 변경되어서 안됨
    }
    //함수로
    printf_str(str);    //포인터 배열을 매개변수로 사용

    // for(i=0; i<3; i++){
    //     printf("%s\n", str[i]);
    // }

    for(i=0; i<3; i++){
        free(str[i]);
    }

    return 0;
}

void printf_str(char **ps){
    while(*ps != NULL){
        printf("%s\n", *ps);
        ps++;
    }
}