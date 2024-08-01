#include <stdio.h>

//2부터 입력한 수까지의 모든 소수 출력

int main(void){
    int n;
    int pn;
    int cnt = 0;

    printf("2 이상의 점수를 입력하세요 : ");
    scanf("%d", &n);

    int i, j;

    for(i=2; i<n+1; i++){
        pn = 1;
        
        for(j=2; j<i; j++){
            
            if((i%j) == 0){
                pn = 0;
                break;
            }
        }
        if(pn == 1){
            printf("%5d", i);
            cnt++;
            if((cnt%5)==0)
                printf("\n");
        }
    }
	
	return 0;
}
