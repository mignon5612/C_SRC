#include <stdio.h>

int main(void){
    FILE *fp;
    char str[] = "banana";
    int i;

    fp = fopen("a.txt", "w");           //fp=파일포인터 파일에 대한 지시자
    
    if(fp == NULL){
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }

    i = 0;
    while(str[i] != '\0'){
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
	fclose(fp);
    
	return 0;
}
