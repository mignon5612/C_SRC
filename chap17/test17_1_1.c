#include <stdio.h>
#include <string.h>

void printf_book(struct book a);

struct book{
    char *title;
    char author[10];
    int page, price;
};

int main(void){
    char temp[100];
	struct book s1;

    printf("제목을 입력하세요. : ");
    gets(temp);
    s1.title = (char*)malloc(strlen(temp)+1);
    strcpy(s1.title, temp);
    strcpy(s1.author, "서현우");
    s1.page = 664;
    s1.price = 26000;

    printf_book(s1);

	return 0;
}

void printf_book(struct book a){
    printf("도서명 : %s\n",a.title);
    printf("저자 : %s\n",a.author);
    printf("페이지수 : %d\n",a.page);
    printf("가격 : %d\n",a.price);
}