#include <stdio.h>
#include <string.h>

int main(void){
    FILE *afp, *bfp, *cfp;
    char aword[10][20];
    char bword[10][20];
    char cword[10][20];
    char ch;
    char *res;

//------------------------------------------------------------------------파일열기
    afp = fopen("a.txt", "r");
    if(afp == NULL){
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }
    
    bfp = fopen("b.txt", "r");
        if(bfp == NULL){
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

    cfp = fopen("c.txt", "w");
        if(cfp == NULL){
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

//------------------------------------------------------------------------변수에 저장
    for(int i=0; i<10; i++){
        res = fgets(aword[i], sizeof(aword[i]), afp);
        if(res == NULL){
            break;
        }
        // printf("%s", aword[i]);
    }
//B값 저장
    for(int i=0; i<10; i++){
        res = fgets(bword[i], sizeof(bword[i]), bfp);       //배열 넘겨주면서 사이즈도 
        if(res == NULL){
            break;
        }
        // printf("%s", bword[i]);
    }

//C값 저장
    int i, j;
    int temp = 0;
    int cnt = 0;

    for(i=0; i<10; i++){
        for(j=0; j<1.; j++){
            if(strcmp(aword[j], bword[i]) == 0){
                temp = 1;      //같은게 있으면 1
                break;
            }
        }
        if (temp == 0){
            // C에 저장
            strcpy(cword[cnt], bword[i]);
            cnt++;
        }
        temp = 0;
    }

//------------------------------------------------------------------------파일닫기                
        fclose(afp);
        fclose(bfp);

    return 0;
}