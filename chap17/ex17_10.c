// #include <stdio.h>

// union student{
//     int i;
//     short sh;
//     char ch;
// };

// int main(void){
//     union student num = {0x12345678};       //밑에 프린트에프에 다같이 공유

//     printf("i = %12p\n", num.i);
//     printf("sh = %12p\n", num.sh);
//     printf("ch = %12p\n", num.ch);

//     return 0;
// }

#include <stdio.h>

union student {
    int i;
    short sh;
    char ch;
};

int main(void) {
    union student num = {0x12345678}; // 유니온을 정수로 초기화합니다

    printf("i = %12p\n", &num.i); // 정수 i의 주소를 출력합니다
    printf("sh = %12p\n", &num.sh); // 쇼트 sh의 주소를 출력합니다
    printf("ch = %12p\n", &num.ch); // 문자 ch의 주소를 출력합니다

    return 0;
}
