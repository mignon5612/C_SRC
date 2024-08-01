#include <stdio.h>

void printf_ary_index(int x, int *pary);

int main(void){
    int ary[5];
    int i;
    int index;

    //1
    for (i = 0; i < 5; i++)
    {
        printf("%d번 숫자를 입력하세요 : ", i+1);
        scanf("%d", &ary[i]);
    }
    //2
while(1)
{
        printf("출력하고 싶은 숫자의 위치를 입력하세요.(1~5) : ");
        scanf("%d", &index);

        if ((index > 0) && (index < 6)){
            printf_ary_index(index, ary);
            //printf("%d번의 숫자는 %d입니다.\n", index, ary[index-1]);
        }
        else{
            break;
        }
}
    return 0;
}

void printf_ary_index(int x, int *pary){
    printf("%d번의 숫자는 %d입니다.\n", x, pary[x-1]);
}